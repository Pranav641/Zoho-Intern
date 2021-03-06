#include <bits/stdc++.h>
#include <sys/stat.h>
#include "user.pb.h"
#include "project.pb.h"
#include "version.pb.h"
#define N 5
using namespace std;

class protobuf
{
    int age, UserID, user_id, projectID, versionNum, versionID;
    string email, password, file_name, name, location;
    bool status;
    public:
        protobuf();
        bool check(string email, string password);
        bool validate_email(string email);
        void assign_data(User *user, string email, string password, string name, int age, string location);
        void sign_in();
        void project_portal();
        void version_change();
        void version_revert(string contents, string operation);
};

protobuf:: protobuf()
{
    status = false;
    UserID = user_id = projectID = versionNum = versionID = 0;
}
// check function is used to check whether the user already has an account. If so, it will redirect to the sign-in function
// else it will redirect to the sign up function
bool protobuf::check(string email, string password)
{
    fstream ifile;
    ifile.open("users.txt",ios::app | ios::in);
    if(!ifile)
        cout<<"Error in file opening!"<<endl;
    else
    {
        Users user_data;
        if(!user_data.ParseFromIstream(&ifile))
            cerr << "Failed to parse user data!" << endl;
        else
        {
            string pass;
            // below loop is used to check whether the entered email and password matches with the previously created accounts
            for(int i=0;i<user_data.users_size();i++)
            {
                const User& user_info = user_data.users(i);
                pass = "";
                for(int i=0;i<(user_info.password()).length();i++)
                {
                    if (((user_info.password()).length()%2!=0) && (i==(user_info.password()).length()-1))
                        pass.push_back(user_info.password()[i]-5);
                    else
                    {
                        pass.push_back(user_info.password()[i]-5);
                        i++;
                        pass.push_back(user_info.password()[i]+5);
                    }
                }
                if(user_info.email() == email && pass == password)
                {   name = user_info.name();   user_id = user_info.userid(); return true;  }
            }
        }
    }
    return false;
}
// validate_email is used to validate the email which is entered by the user
bool protobuf::validate_email(string email)
{
    if (!((email[0]>=65 && email[0]<=90) || (email[0]>=97 && email[0]<=122)))
        return false;
        
    int i, at=-1, dot=-1;
    for (i=0;i<email.length();i++)
    {
        if(!isalnum(email[i]) && email[i]!='@' && email[i]!='.')
            return false;
        if (email[i] == '@')
            at = i;
        else if (email[i] == '.')
            dot = i;
    }
    if (at==-1 || dot==-1)
        return false;
    if (at > dot)
        return false;
    return !(dot>=(email.length()-1));
}

void protobuf::assign_data(User *user, string email, string password, string name, int age, string location)
{
   *user->mutable_email() = email;
   *user->mutable_password() = password;
   *user->mutable_name() = name;
   *user->mutable_location() = location;
   user->set_age(age);
   UserID++;
   user->set_userid(UserID);
}

void protobuf::sign_in()
{
    cout<<"Enter the Email:  ";
    getline(cin>>ws,email);
    cout<<"Enter the Password:  ";
    cin>>password;
    // if the entered email is not valid, then an alert is shown
    if (!validate_email(email))
        cout<<"Entered Email is not valid!!! Re-enter the Email and password!"<<endl;
    else
    {
        // check is used to check whether the user already has an account
        if(check(email,password))
        {
            status = true;
            cout<<"Signed in successfully!!!\n"<<endl;
        }
        else
        {
            fstream file;
            file.open("users.txt",ios::app);
            if(!file)
                cout<<"Error in file opening!"<<endl;
            else
            {
                cout<<"Enter Name:  ";
                cin>>name;
                cout<<"Enter Age:  ";
                cin>>age;
                cout<<"Enter Location:  ";
                cin>>location;

                // below for loop is used to encrypt the password in the following manner.
                // it adds +5 ASCII value for the odd characters and subtract -5 ASCII value for the even character
                for(int i=0;i<password.length();i++)
                {
                    if ((password.length()%2!=0) && (i==password.length()-1))
                        password[i] = password[i]+5;
                    else
                    {
                        password[i] = password[i]+5;
                        i++;
                        password[i] = password[i]-5;
                    }
                }

                Users user_data;            
                assign_data(user_data.add_users(),email,password,name,age,location);
            
                user_data.SerializeToOstream(&file);
                user_id = UserID;
                cout<<"Account created successfully!!!\n"<<endl;
                status = true;
            }
        }
        project_portal();       
    }
}

void protobuf::project_portal()
{
    if(!status)
        cout<<"Sign-in in order to access the project portal!"<<endl;
    else
    {
        int choice;
        string s, contents, operation;
        bool file_status = false, flag, operation_flag = false;
        fstream project_file, project_data_file, version_data_file;
        project_data_file.open("projects.txt",ios::app | ios::in);

        cout<<"Enter  1. To create a New file   2. To Display the projects:   ";
        cin>>choice;
        switch(choice)
        {
            case 1: {
                // below if else is used to check whether there is any directory for the user with their corresponding
                // user id as the directory name
                struct stat info;
                if (stat(to_string(user_id).c_str(),&info)!=0)
                    flag = false;
                else if(info.st_mode & S_IFDIR) 
                    flag = true;
                else
                    flag = false;
                // If there is no such directory, then new directory with name same as the user id is created
                if(!flag)
                {
                    mkdir(to_string(user_id).c_str(),0777);
                    cout<<"New directory "<<user_id<<" is created!!!"<<endl;
                }
                // Below statements are used to get the name of the project to be created from the user and it creates a new project
                cout<<"Enter the name of the file:   ";
                cin>>file_name;

                projectID++;
                project_file.open(("./"+to_string(user_id)+"/"+file_name+".txt").c_str(),ios::app | ios::in);

                contents = "";
                // After creating a new project, the contents which are entered by the user are added to the project
                cout<<"Enter the text. Enter -1 to exit:"<<endl;
                getline(cin>>ws,s);
                while(s.compare("-1")!=0)
                {
                    contents = contents + s + "\n";
                    getline(cin>>ws,s);
                }
                project_file << contents;
                operation_flag = true;
                operation = "New";
                
                Projects projects_data;
                Project *project = projects_data.add_projects();
                project->set_project_id(projectID);
                project->set_user_id(user_id);
                project->set_project_name(name);

                projects_data.SerializeToOstream(&project_data_file);
                break;
            }
            case 2: {
                cout<<"\nDisplaying the projects created:"<<endl;
                // below for loop is used to list all the files under a specific directory
                for(const auto &itr : filesystem::directory_iterator(("./"+to_string(user_id)).c_str()))
                {
                    string fileName = "", file_name_ext = itr.path().filename().string();
                    int i;
                    for(i=0;file_name_ext[i]!='.';i++)
                        fileName += file_name_ext[i];
                    cout<<fileName<<endl;
                }
                cout<<"Enter the file you want to open:   ";
                cin>>file_name;
                project_file.open((("./"+to_string(user_id)+"/"+file_name+".txt").c_str()),ios::app|ios::in);
                file_status = true;
                break;
            }
            default: cout<<"Enter a valid choice!"<<endl; 
        }
        if(file_status)
        {
            int option;
            contents = "";
            cout<<"\nEnter  1. To add   2. To update   3. To remove   4. To display:  ";
            cin>>option;
            switch(option)
            {
                case 1: {
                    project_file.clear();
                    project_file.seekg(0);
                    while (getline(project_file,s))
                        contents = contents + s +"\n";
                    cout<<"Enter the text. Enter -1 to exit:"<<endl;
                    getline(cin>>ws,s);
                    while(s.compare("-1")!=0)
                    {
                        contents = contents + s + "\n";
                        getline(cin>>ws,s);
                    }
                    fstream project_new_file;
                    project_new_file.open(("./"+to_string(user_id)+"/"+file_name+".txt").c_str(),ios::out);
                    project_new_file << contents;
                    operation = "Add";
                    operation_flag = true;
                    break;
                }
                case 2: {    
                    fstream project_new_file;                
                    cout<<"Enter  1. To update a particular line   2. To update the entire document:   ";
                    cin>>option;
                    if(option == 1)
                    {
                        int line_no;
                        string content;
                        cout<<"Enter the line number you want to update:  ";
                        cin>>line_no;
                        cout<<"Enter the content:  ";
                        getline(cin>>ws,content);
                        contents = "";
                        for(int i=1;i<line_no && getline(project_file,s);i++)
                            contents = contents + s + "\n";
                        contents = contents + content + "\n";
                        getline(project_file,s);
                        while (getline(project_file,s))
                            contents = contents + s + "\n";
                        project_new_file.open(("./"+to_string(user_id)+"/"+file_name+".txt").c_str(),ios::out);
                        project_new_file << contents;
                        operation_flag = true;
                           
                    }
                    else if (option == 2)
                    {
                        cout<<"Enter the text. Enter -1 to exit:"<<endl;
                        getline(cin>>ws,s);
                        while(s.compare("-1")!=0)
                        {
                            contents = contents + s + "\n";
                            getline(cin>>ws,s);
                        }
                        project_new_file.open(("./"+to_string(user_id)+"/"+file_name+".txt").c_str(),ios::out);
                        project_new_file << contents;
                        operation_flag = true;
                    }
                    else
                        cout<<"Enter a valid choice!"<<endl;
                    operation = "Update";
                    break;
                }
                case 3: {
                    fstream project_new_file;
                    int line_no=1, line_num;
                    cout<<"\nDisplaying the contents of the file: "<<endl;
                    project_file.clear();
                    project_file.seekg(0);
                    while(getline(project_file,s))
                    {   cout<<line_no<<"  "<<s<<endl;   line_no++;  }

                    cout<<"\nEnter  1. To remove a particular line   2. To remove the entire document: ";
                    cin>>option;
                    if(option == 1)
                    {
                        project_file.clear();
                        project_file.seekg(0);
                        contents = "";
                        cout<<"\nEnter the line number you want to remove:  ";
                        cin>>line_num;
                        for(int i=1;i<line_num && getline(project_file,s);i++)
                            contents = contents + s + "\n";
                        getline(project_file,s);
                        while (getline(project_file,s))
                            contents = contents + s + "\n";
                        project_new_file.open(("./"+to_string(user_id)+"/"+file_name+".txt").c_str(), ios::out);
                        
                        project_new_file << contents;
                        operation_flag = true;
                    }
                    else if(option == 2)
                    {
                        if(!remove(("./"+to_string(user_id)+"/"+file_name+".txt").c_str()))
                            cout<<"File is successfully deleted!"<<endl;
                        else
                            cout<<"Error in deleting the file!"<<endl;
                        operation_flag = true;
                    }
                    else
                        cout<<"Enter a valid choice!"<<endl;
                    operation = "Remove";
                    break;
                }
                case 4: {
                    int line_no=1;
                    cout<<"Displaying the contents of the file: "<<endl;
                    project_file.clear();
                    project_file.seekg(0);
                    while(getline(project_file,s))
                    {   cout<<line_no<<"  "<<s<<endl;   line_no++;  }
                    break;
                }
                default: cout<<"Enter a valid choice!"<<endl;
            }
        }
        if(operation_flag)
        {
            version_revert(contents, operation);
        }       
    }
}

void protobuf::version_revert(string contents, string operation)
{
    // every changes done are now updated in the version proto
    ifstream version_data_read;
    version_data_read.open(("./"+to_string(user_id)+"/"+to_string(user_id)+"_"+file_name+"_version.txt").c_str(),ios::in);
    Versions version_data;
    version_data.ParseFromIstream(&version_data_read);
    if(version_data.versions_size()!=0)
    {
        const Version& temp = version_data.versions(version_data.versions_size()-1);
        versionID = temp.version_id();
        if(versionID == N)
        {   versionNum = temp.version_number()+1;   versionID=0; }
    }
    else
    {   versionID++;    versionNum = 0; }

    fstream version_data_file;
    version_data_file.open(("./"+to_string(user_id)+"/"+to_string(user_id)+"_"+file_name+"_version.txt").c_str(),ios::app | ios::in);
    
    Versions version_obj;
    Version *version = version_obj.add_versions();
    version->set_version_id(versionID);
    version->set_version_number(versionNum);
    version->set_project_id(projectID);
    version->set_project_name(("./"+to_string(user_id)+"/"+file_name+".txt").c_str());
    version->set_user_id(user_id);
    version->set_contents(contents);
    version->set_operations((operation+"\n").c_str());

    version_obj.SerializeToOstream(&version_data_file);
}

void protobuf::version_change()
{
    if(!status)
        cout<<"Sign-in in order to access the project portal!"<<endl;
    else
    {
        int new_version_num;
        cout<<"Enter the version number you want to revert back:  ";
        cin>>new_version_num;

        fstream version_file;
        version_file.open("./"+to_string(user_id)+"/"+to_string(user_id)+"_"+file_name+"_version.txt",ios::app | ios::in);
        if(!version_file)
            cout<<"Error in opening the version file"<<endl;
        else
        {
            Versions version_data;
            if(!version_data.ParseFromIstream(&version_file))
                cerr << "Failed to parse version data!" << endl;
            else
            {
                fstream file;
                // here if the user enters the version number as 1, then the N(5) operations are reflected in the project file

                if(!file)
                    cout<<"Error";
                else
                {
                    const Version& version_info = version_data.versions((N*new_version_num)-1);
                    file.open(version_info.project_name(),ios::out);
                    if(version_info.operations() == "Remove" && version_info.contents() == " ")
                        remove(version_info.project_name().c_str());
                    else
                        file << version_info.contents();
                    version_revert(version_info.contents(), "Version_change");
                    
                }                
            }
        }
    }
}


int main()
{
    int choice;
    protobuf obj;
    do
    {
        cout<<"\n\nEnter 1. To sign in   2. To enter to Project Portal   3. To perform versioning  4. To exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:  obj.sign_in();  break;
        case 2: obj.project_portal(); break;
        case 3: obj.version_change(); break;
        case 4: cout<<"Control is exited!!!"<<endl; break;
        default: cout<<"Enter a valid choice!!!"; break;
        }
    } while (choice!=4);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class AgeNotWithinRangeException : public exception
{
	public:
	const char *what()
	{
		return ("Age is not within the range. Please enter the age between 15 and 21.");
	}	
};

class NameNotValidException : public exception
{
	public:
	const char *what()
	{
		return ("Name is not valid. It should contain only alphabets.");
	}	
};

class InvalidCouseException : public exception
{
	public:
	const char *what()
	{
		return ("Course name is not valid. It should fall under a predefined list of available courses.");
	}	
};

class StudentCountLimitExceeded : public exception
{
	public:
	const char *what()
	{
		return ("A student can create only one object.");
	}
};

class Student
{
	int roll_no,age;
	string name,course;
	static int student_count;
	public:
		static bool status;
		Student(int roll_no,int age,string name,string course);
};

int Student::student_count=0;
bool Student::status = false;

Student::Student(int roll_no,int age,string name,string course)
{
	try
	{
		if(student_count >=1)
		{
			status = false;
			throw StudentCountLimitExceeded();
		}
		
		if(age>=15 && age<=20)
			this->age = age;			
		else
			throw AgeNotWithinRangeException();
	
		for(int i=0;name[i];i++)
		{
			if(!((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122)))
				throw NameNotValidException();
		}
		this->name = name;
		
	
		string course_list[] = {"ABC","PQR","XYZ"};
		int flag=0;
		transform(course.begin(),course.end(),course.begin(),::toupper);
		for(int i=0;i<sizeof(course_list)/sizeof(course_list[0]);i++)
		{
			if(course.compare(course_list[i])==0)
			{
				flag=1;  break;
			}
		}
		if(flag==0)
			throw InvalidCouseException();
		this->course = course;
		
		student_count++;
		status = true;
	}
	catch(StudentCountLimitExceeded &e)
	{
		cerr << e.what()<<endl;
	}
	catch(AgeNotWithinRangeException &e)
	{
		cerr << e.what()<<endl;
	}
	catch(NameNotValidException &e)
	{
		cerr << e.what()<<endl;
	}
	catch(InvalidCouseException &e)
	{
		cerr << e.what()<<endl;
	}

}

int main()
{
	Student obj(1,20,"Zoho","ABC");
	if(Student::status)
		cout<<"Object successfully created!!!";
	return 0;
}

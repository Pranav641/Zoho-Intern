#include <bits/stdc++.h>
using namespace std;

class Bank
{
	public:
		string date,bank_type;		
		float interest;
		string name;
		Bank();
		friend Bank& operator < (Bank &obj1, Bank &obj2);
		virtual void getName();
		virtual void getEstablisedDate();
		virtual void BankType();
		virtual void getInfo();
};

Bank::Bank()
{
	name="";
	date="";
	bank_type="";
}

void Bank::getName()
{
	cout<<"Enter the Name of the Bank: ";
	cin>>name;
}
void Bank::getEstablisedDate()
{
	cout<<"Enter the Established Date of Bank(DD/MM/YYYY): ";
	cin>>date;
}
void Bank::BankType()
{
	cout<<"Enter the type of the Bank(Private/Public): ";
	cin>>bank_type;
}
void Bank::getInfo()
{
	cout<<"\nThe details of the Bank are: "<<endl;
	cout<<"Name of the Bank: "<<name<<endl;
	cout<<"Established date of the Bank: "<<date<<endl;
	cout<<"Type of the Bank: "<<bank_type<<endl;
}


class Loan
{
	public:
		string loan_type;
		vector<string> docs;
		virtual void getAvailableLoans()=0;
		virtual void get_Interest_Rate()=0;
		virtual void document_Required()=0;
};


class HDFC : public Bank, public Loan
{
	private:
		string branch;
	public:
		HDFC()
		{
			branch="";
		}
		void getName()
		{
			cout<<"\nWelcome to HDFC Bank!!!";
			name="HDFC";
			cout<<"\nEnter the branch of the bank: ";
			cin>>branch;
		}
		void getEstablisedDate()
		{
			Bank::getEstablisedDate();
		}
		void BankType()
		{
			Bank::BankType();
		}
		
		void get_Interest_Rate()
		{
			if(loan_type.compare("gold loan")==0)
				interest=11;
			else if(loan_type.compare("land loan")==0)
				interest=9;
			else if(loan_type.compare("personal loan")==0)
				interest=6;
			else
				cout<<"Please enter the type of Loan."<<endl;
		}
		void getAvailableLoans()
		{
			int x;
			cout<<"\nThe Loans that are available in the Bank are Gold loan , Land loan and Personal loan."<<endl;
			cout<<"Enter 1.To avail Gold loan  2.To avail Land loan   3.To avail Personal loan"<<endl;
			cin>>x;
			if(x==1)
				loan_type="gold loan";
			else if(x==2)
				loan_type="land loan";
			else if(x==3)
				loan_type="personal loan";
			else
				cout<<"Enter a valid choice."<<endl;
		}
		void document_Required()
		{
			docs.push_back("Aadhar Card");
			docs.push_back("Pan Card");
			docs.push_back("Original Proof");
		}
		
		void getInfo()
		{
			Bank::getInfo();
			cout<<"Branch of the bank is: "<<branch<<endl;
			cout<<"Type of loan is: "<<loan_type<<endl;
			cout<<"Interest Rate is: "<<interest<<endl;
		}
};

class SBI : public Bank, public Loan
{
	private:
		string branch;
	public:
		SBI()
		{
			branch="";
		}
		void getName()
		{
			cout<<"\nWelcome to SBI Bank!!!";
			name="SBI";
			cout<<"\nEnter the branch of the bank: ";
			cin>>branch;
		}
		void getEstablisedDate()
		{
			Bank::getEstablisedDate();
		}
		void BankType()
		{
			Bank::BankType();
		}
		
		void get_Interest_Rate()
		{
			if(loan_type.compare("gold loan")==0)
				interest=7;
			else if(loan_type.compare("land loan")==0)
				interest=8;
			else if(loan_type.compare("personal loan")==0)
				interest=5;
			else
				cout<<"Please enter the type of Loan."<<endl;
		}
		void getAvailableLoans()
		{
			int x;
			cout<<"\nThe Loans that are available in the Bank are Gold loan , Land loan and Personal loan."<<endl;
			cout<<"Enter 1.To avail Gold loan  2.To avail Land loan   3.To avail Personal loan"<<endl;
			cin>>x;
			if(x==1)
				loan_type="gold loan";
			else if(x==2)
				loan_type="land loan";
			else if(x==3)
				loan_type="personal loan";
			else
				cout<<"Enter a valid choice."<<endl;
		}
		void document_Required()
		{
			docs.push_back("Aadhar Card");
			docs.push_back("Pan Card");
			docs.push_back("Original Proof");
		}
		
		void getInfo()
		{
			Bank::getInfo();
			cout<<"Branch of the bank is: "<<branch<<endl;
			cout<<"Type of loan is: "<<loan_type<<endl;
			cout<<"Interest Rate is: "<<interest<<endl;
		}
};

class ICICI : public Bank, public Loan
{
	private:
		string branch;
	public:
		ICICI()
		{
			branch="";
		}
		void getName()
		{
			cout<<"\nWelcome to ICICI Bank!!!";
			name="ICICI";
			cout<<"\nEnter the branch of the bank: ";
			cin>>branch;
		}
		void getEstablisedDate()
		{
			Bank::getEstablisedDate();
		}
		void BankType()
		{
			Bank::BankType();
		}
		
		void get_Interest_Rate()
		{
			if(loan_type.compare("gold loan")==0)
				interest=10;
			else if(loan_type.compare("land loan")==0)
				interest=11;
			else if(loan_type.compare("personal loan")==0)
				interest=7;
			else
				cout<<"Please enter the type of Loan."<<endl;
		}
		void getAvailableLoans()
		{
			int x;
			cout<<"\nThe Loans that are available in the Bank are Gold loan , Land loan and Personal loan."<<endl;
			cout<<"Enter 1.To avail Gold loan  2.To avail Land loan   3.To avail Personal loan"<<endl;
			cin>>x;
			if(x==1)
				loan_type="gold loan";
			else if(x==2)
				loan_type="land loan";
			else if(x==3)
				loan_type="personal loan";
			else
				cout<<"Enter a valid choice."<<endl;
		}
		void document_Required()
		{
			docs.push_back("Aadhar Card");
			docs.push_back("Pan Card");
			docs.push_back("Original Proof");
		}
		void getInfo()
		{
			Bank::getInfo();
			cout<<"Branch of the bank is: "<<branch<<endl;
			cout<<"Type of loan is: "<<loan_type<<endl;
			cout<<"Interest Rate is: "<<interest<<endl;
		}
		
};

class Indian_Bank : public Bank, public Loan
{
	private:
		string branch;
	public:
		Indian_Bank()
		{
			branch="";
		}
		void getName()
		{
			cout<<"\nWelcome to Indian Bank Bank!!!";
			name="Indian Bank";
			cout<<"\nEnter the branch of the bank: ";
			cin>>branch;
		}
		void getEstablisedDate()
		{
			Bank::getEstablisedDate();
		}
		void BankType()
		{
			Bank::BankType();
		}
		
		void get_Interest_Rate()
		{
			if(loan_type.compare("gold loan")==0)
				interest=5;
			else if(loan_type.compare("land loan")==0)
				interest=8;
			else if(loan_type.compare("personal loan")==0)
				interest=9;
			else
				cout<<"Please enter the type of Loan."<<endl;
		}
		void getAvailableLoans()
		{
			int x;
			cout<<"\nThe Loans that are available in the Bank are Gold loan , Land loan and Personal loan."<<endl;
			cout<<"Enter 1.To avail Gold loan  2.To avail Land loan   3.To avail Personal loan:  "<<endl;
			cin>>x;
			if(x==1)
				loan_type="gold loan";
			else if(x==2)
				loan_type="land loan";
			else if(x==3)
				loan_type="personal loan";
			else
				cout<<"Enter a valid choice."<<endl;
		}
		void document_Required()
		{
			docs.push_back("Aadhar Card");
			docs.push_back("Pan Card");
			docs.push_back("Original Proof");
		}
		void getInfo()
		{
			Bank::getInfo();
			cout<<"Branch of the bank is: "<<branch<<endl;
			cout<<"Type of loan is: "<<loan_type<<endl;
			cout<<"Interest Rate is: "<<interest<<endl;
		}		
};


class Broker : public Bank
{	
	public:
		friend Bank& operator < (Bank &obj1 , Bank &obj2)
		{
			if(obj1.interest < obj2.interest)
				return obj1;
			else
				return obj2;
		}
		
		void display(Bank &obj)   // To display the details of a single Bank
		{
			cout<<"Name of the Bank: "<<obj.name<<endl;
			cout<<"Established Date of the Bank: "<<obj.date<<endl;
			cout<<"Type of the Bank: "<<obj.bank_type<<endl;
			
		}
		void display(Bank &obj1,Bank &obj2,Bank &obj3,Bank &obj4) // To display the details of mulitple banks
		{
			cout<<"Name of the Bank: "<<obj1.name<<endl;
			cout<<"Established Date of the Bank: "<<obj1.date<<endl;
			cout<<"Type of the Bank: "<<obj1.bank_type<<endl;
			cout<<"Name of the Bank: "<<obj2.name<<endl;
			cout<<"Established Date of the Bank: "<<obj2.date<<endl;
			cout<<"Type of the Bank: "<<obj2.bank_type<<endl;
			cout<<"Name of the Bank: "<<obj3.name<<endl;
			cout<<"Established Date of the Bank: "<<obj3.date<<endl;
			cout<<"Type of the Bank: "<<obj3.bank_type<<endl;
			cout<<"Name of the Bank: "<<obj4.name<<endl;
			cout<<"Established Date of the Bank: "<<obj4.date<<endl;
			cout<<"Type of the Bank: "<<obj4.bank_type<<endl;
		}		
};

int main()
{
	HDFC obj1;
	SBI obj2;
	ICICI obj3;
	Indian_Bank obj4;
	
	obj1.getName();
	obj1.getEstablisedDate();
	obj1.BankType();
	obj1.getAvailableLoans();
	obj1.get_Interest_Rate();
	obj1.document_Required();
	obj1.getInfo();
	
	obj2.getName();
	obj2.getEstablisedDate();
	obj2.BankType();
	obj2.getAvailableLoans();
	obj2.get_Interest_Rate();
	obj2.document_Required();
	obj2.getInfo();
	
	obj3.getName();
	obj3.getEstablisedDate();
	obj3.BankType();
	obj3.getAvailableLoans();
	obj3.get_Interest_Rate();
	obj3.document_Required();
	obj3.getInfo();
	
	obj4.getName();
	obj4.getEstablisedDate();
	obj4.BankType();
	obj4.getAvailableLoans();
	obj4.get_Interest_Rate();
	obj4.document_Required();
	obj4.getInfo();
	
	Bank ans;
	char ch,choice;
	do
	{
		cout<<"\nHow many banks you want to compare (2/3/n)? ";
		cin>>choice;
		if(choice=='2')
		{
			cout<<"The bank that offers minimum interest(between HDFC and SBI) is : ";
			ans =  (obj1<obj2);
			cout<<ans.name;
		}
		else if(choice=='3')
		{
			ans = obj1<obj2;
			cout<<"The bank that offers minimum interest(between HDFC, SBI and ICICI) is : ";
			ans =  (ans < obj3);
			cout<<ans.name;
		}
		else if(choice=='n')
		{
			ans = obj1<obj2;
			ans = ans<obj3;
			ans = ans<obj4;
			cout<<"The bank that offers minimum interest is : ";
			cout<<ans.name;
		}
		else
			cout<<"Enter a valid choice."<<endl;
		cout<<"\n\nDo you want to continue? "<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
			
	
	Broker object;
	
	cout<<"\n\nPrinting the details of a single Bank: "<<endl;
	cout<<"Enter the choice of the bank."<<endl;
	cout<<"Enter 1. HDFC   2. SBI   3. ICICI   4. Indian Bank "<<endl;
	cin>>choice;
	if(choice=='1')
		object.display(obj1);
	else if(choice=='2')
		object.display(obj2);
	else if(choice=='3')
		object.display(obj3);
	else if(choice=='4')
		object.display(obj4);
	else
		cout<<"Enter a valid choice."<<endl;

	cout<<"\n\nDisplaying the details of all the Banks: "<<endl<<endl;
	object.display(obj1,obj2,obj3,obj4);
	return 0;
}

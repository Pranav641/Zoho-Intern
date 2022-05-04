#include <bits/stdc++.h>
using namespace std;
class Train
{
	protected:
		string name,compartment;
		char sex;
		int age,ticket_cost;
		static int id;
	public:
		Train();
		void ticket_fare();
		void getinfo();
		void display();
		
};

int Train::id=0;

Train::Train()
{
	name=""; compartment = "";
	sex=' ';
	age=0; ticket_cost=0;
}

void Train::ticket_fare()
{
	compartment = "Normal";
	ticket_cost = 20;	
}

void Train::getinfo()
{
	char blank;
	cout<<"\nEnter the Passenger name: ";
	cin>>name;
	cout<<"Enter the Passenger age: ";
	cin>>age;
	cout<<"Enter the Passenger sex(M/F): ";
	cin>>sex;
	ticket_fare();
	id++;
}

void Train::display()
{
	cout<<"Passenger ID: "<<id<<endl;
	cout<<"Passenger Name: "<<name<<endl;
	cout<<"Passenger Age: "<<age<<endl;
	cout<<"Passenger Sex: "<<sex<<endl;
	cout<<"Compartment: "<<compartment<<endl;
	cout<<"Ticket Cost: "<<ticket_cost<<endl;
}


class First_Class : public Train
{
	public:
	void ticket_fare()
	{
		Train::getinfo();
		compartment = "First Class";
		ticket_cost = 100;
	}
		
};


class Ladies : public Train
{
	public:
	void ticket_fare()
	{
		Train::getinfo();
		compartment = "Ladies";
		ticket_cost = 10;
	}
	
};

class Normal : public Train
{
	public:
	void ticket_fare()
	{
		Train::getinfo();
		compartment = "Normal";
		ticket_cost = 20;
	}
};

int main()
{
	Ladies obj1;
	First_Class obj2;
	Normal obj3;
	cout<<"\nEnter the details of Passenger-1 (Ladies Compartment): ";
	obj1.ticket_fare();
	cout<<"\nDetails of Passenger 1: "<<endl;
	obj1.display();
	cout<<"\nEnter the details of Passenger-2 (First Class Compartment): ";
	obj2.ticket_fare();
	cout<<"\nDetails of Passenger 2: "<<endl;
	obj2.display();
	cout<<"\nEnter the details of Passenger-3 (Normal Compartment): ";
	obj3.ticket_fare();
	cout<<"\nDetails of Passenger 3: "<<endl;
	obj3.display();
	
	return 0;
}

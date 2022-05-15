#include <bits/stdc++.h>
using namespace std;

class mobile
{
	public:
	    long long int number;
	    float amount;
	
	    bool add_Connection(long long int num)
	    {
	        if (floor(log10(num)+1)!=10)
	        {
	            cout<<"\nEntered number is not a valid mobile number";
	            return false;
	        }
	        else
	        {
	            number = num;
	            amount = 0;
	            return true;
	        }
	    }
	    
	    void update_bill(int index, vector<mobile> &user)
	    {
	    	
	        cout<<"Enter the amount: ";
	        cin>>amount;
	        user[index].amount += amount;
	    }
	    
		void bill_payments(int i,vector<mobile> &user)
	    {
	        cout<<"Enter the amount: ";
	        cin>>amount;	
	        if(amount == user[i].amount)
	        {
	            user[i].amount = 0;
	            cout<<"\nThe amount has been paid.";
	            cout<<"\nThe current balance: "<<user[i].amount;
	        }
	        else if(amount > user[i].amount)
	        {
	        	cout<<"Rs. "<<(amount-user[i].amount)<<" is paid in excess.";
	            user[i].amount = 0;
	        }
	        else
	        {
	            user[i].amount -= amount;
	            cout<<"\nRemaining amount to be paid is: "<<user[i].amount;
	        }
	    }
};

class landline
{
	public:
	    int std;
	    long long int number;
	    float amount;
	
	    bool add_Connection(long long int num)
	    {
	        if(floor(log10(num)+1) != 10)
	        {
	            cout<<"\nEntered number is not a valid landline number";
	            return false;
	        }	
	        else
	        {
		        std = num/100000000;
		        number = num;
		        amount = 0;
		        return true;
	        }
	    }
	
	    void update_bill(int index, vector<landline> &user)
	    {
	        cout<<"Enter the amount: ";
	        cin>>amount;	
	        user[index].amount += amount;
	    }
	
	    void bill_payments(int i,vector<landline> &user)
	    {
	        cout<<"Enter the amount: ";
	        cin>>amount;
	        
	        if(amount == user[i].amount)
	        {
	            user[i].amount = 0;
	            cout<<"\nThe amount has been paid.";
	            cout<<"\ncurrent balance is 0";
	        }
	        else if(amount > user[i].amount)
	        {
	        	cout<<"Rs. "<<(amount-user[i].amount)<<" is paid in excess.";
	            user[i].amount = 0;
	        }
	        else
	        {
	            user[i].amount -= amount;
	            cout<<"\nRemaining amount to be paid is: "<<user[i].amount;
	        }
	    }
};

template <class T>
class bill_payments
{
	public:
	    T var;
	    vector<T> connections; 

	    void add_connection(T &user)
	    {
	        if (var.add_Connection(user.number) == true)
            {
                cout<<"The connection is added.";
                connections.push_back(var);
            }
            else
                cout<<"\nThe connection is not added.";	
	    }
	
	    bool update_bill(long long int number)
	    {
	    	bool visited = false;
	    	for(int i=0;i<connections.size();i++)
	    	{
	    		if(connections[i].number == number)
	    		{
	    			var.update_bill(i,connections);
	    			visited = true;  break;
				}
			}
			return visited;
	    }
	
	    bool bill_payment(long long int number)
	    {
	    	bool visited = false;
	    	for(int i=0;i<connections.size();i++)
	    	{
	    		if(connections[i].number == number)
	    		{
	    			var.bill_payments(i,connections);
	    			visited = true;  break;
				}
			}
			return visited;
	    }
	
	    void print_contents()
	    {
	        for (int i=0;i<connections.size();i++)
	        {
	            cout<<connections[i].number<<"  -  "<<connections[i].amount<<endl;
	        }
	    }
};

int main()
{

    bill_payments<mobile> m_obj;
    bill_payments<landline> l_obj;
    mobile obj1;
    landline obj2;
    
	long long int number;
    int choice;
    do
    {        
		cout<<"\n\n 1. To add a mobile connection\n 2. To add a landline connection\n 3. Display mobile information\n 4. Display landline information\n 5. To update the bill\n 6. To pay bills\n 7. To exit"<<endl;
        cout<<"\nEnter the choice: ";
        cin>>choice;
        switch (choice)
        {
	        case 1: {
	        	cout<<"\nEnter the number: ";
	        	cin>>number;
	        	obj1.number = number;
	        	m_obj.add_connection(obj1);
				break;
			}
	        case 2: {
	        	cout<<"\nEnter the number: ";
	        	cin>>number;
	        	obj2.number = number;
	        	l_obj.add_connection(obj2);
				break;
			}	
	        case 3: m_obj.print_contents();	break;	
	        case 4: l_obj.print_contents();   break;
	        case 5:    {
	            cout<<"\nEnter the number: ";
	            cin>>number;				
				if(m_obj.update_bill(number) || l_obj.update_bill(number))
					cout<<"\nBill amount updated";
				else
					cout<<"No number found!";
				break;
	        }    
	        case 6:     {
	            cout<<"\nEnter the number: ";
	            cin>>number;
	            if(m_obj.bill_payment(number) || l_obj.bill_payment(number))
					cout<<"\nBill amount paid";
				else
					cout<<"No number found!";
				break;
	        }
	        case 7: cout<<"System is exiting"<<endl;
	        default: cout<<"\nEnter a valid choice!!!";
	    }
    } while(choice!=7);

    return 0;
}


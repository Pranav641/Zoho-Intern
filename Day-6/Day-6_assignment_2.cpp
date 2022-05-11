#include <bits/stdc++.h>
using namespace std;

void function(int num1,int num2,string s,int index)
{
	try
	{
		if(num2==0)
		{
			throw runtime_error("Divide by Zero Exception");
		}
		else
			cout<<"Answer after division of "<<num1<<" / "<<num2<<" is : "<<(num1/num2)<<endl;
		
		try
		{
			if(s[index])
				cout<<"The character at the index "<<index<<" is : "<<s[index]<<endl;
			else
				throw "Index is invalid";		
		}
		catch(const char *e)
		{
			cerr<<e<<endl;
			throw;
		}  		
	}
	catch(runtime_error &e)
	{
		cout<<e.what()<<endl;
	}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
}


int main()
{
	cout<<"First Case: "<<endl;  // If an exception occurs within outer try block.
	function(20,0,"Zoho",3);
	
	cout<<"\nSecond case: "<<endl;  // If an exception occurs inside inner try block.
	function(20,4,"Zoho",5);
	
	cout<<"\nThird case: "<<endl;  // In case of no such notable exceptions.
	function(10,5,"Zoho",2);
	
	cout<<"\nFourth case: "<<endl;  // To re-throw an exception already catched.
	function(25,6,"Zoho",9);
	
		
	return 0;
}

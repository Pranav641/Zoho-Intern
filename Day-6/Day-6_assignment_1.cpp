 #include <bits/stdc++.h>
using namespace std;

void divide_by_zero()
{
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	try
	{
		if(num2==0)
			throw runtime_error("Invalid division");
		else
			cout<<"Answer after division is : "<<(num1/num2)<<endl;
	} 
	catch(runtime_error &e)
	{	cerr << e.what()<<endl; }
}

void heap_memory_exception()
{
	try
	{
		int *var = new int[1000000000000];
		cout<<"Memory is allocated successfully!"<<endl;
	}
	catch(bad_alloc &e)
	{	cerr << "Memory is compromised!"<<endl; }
}

void string_to_numeric_exception()
{
	int num;
	cout<<"Enter a number : ";
	try
	{
		cin>>num;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			throw runtime_error("Format mismatch");
		}
		else
			cout<<"The number entered is : "<<num<<endl;
	}
	catch (runtime_error &e)
	{
		cerr<<e.what()<<endl;
	}
	
}

void invalid_index_string_exception()
{
	string s;
	int index;
	cout<<"Enter the string : ";
	cin>>s;
	cout<<"Enter the index you want to access : ";
	cin>>index;
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
	}
}

void invalid_index_array_exception()
{
	int n,index,i;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements: ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter the index you want to access : ";
	cin>>index;
	try
	{
		if(index<n)
			cout<<"The element at the index "<<index<<" is : "<<arr[index]<<endl;
		else
			throw "Array index is invalid";
			
	}
	catch(const char *e)
	{
		cerr<<e<<endl;
	}
}

class MyException : public exception
{
	char *param;
	public:
		MyException(char *param)
		{	this->param = param; }
		const char *what()
		{
			cerr<<"MyException["<<param<<"]";
		}
};

int main()
{
	try
	{
		cout<<"To implement Divide by Zero Exception : "<<endl;
		divide_by_zero();
		cout<<"\nTo implement Heap Memory Exception : "<<endl;
		heap_memory_exception();
		cout<<"\nTo implement String parsed to numeric variable Exception : "<<endl;
		string_to_numeric_exception();
		cout<<"\nTo implement Accessing an invalid index in string Exception : "<<endl;
		invalid_index_string_exception();
		cout<<"\nTo implement Accessing an invalid index in array Exception : "<<endl;
		invalid_index_array_exception();
		
		cout<<"\nUser defined exception: "<<endl;
		try
		{
			throw MyException("Invalid Exception");
		}
		catch(MyException &e)
		{
			e.what();  cout<<endl;
		}
		
	}
	catch(...)
	{
		cout<<"Exception encountered"; // Exceptions other than mentioned above
	}
	
	cout<<"\nException Handling Accomplished";  //Finally, after the exception is handled
	
	return 0;
}

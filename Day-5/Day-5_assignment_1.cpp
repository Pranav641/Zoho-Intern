#include <bits/stdc++.h>
using namespace std;

namespace namespace_1
{
	class Name
	{
		string name;
		public:
			Name()
			{
				name="";
			}
			void getname(string s)
			{
				this->name = s;
			}
			void printname()
			{
				cout<<"Hello "<<name<<"!!!"<<endl;
			}
	};
	
	
	namespace Math
	{
		int length,breadth,radius;
		void area()
		{
			cout<<"\nArea of Square: "<<endl;
			cout<<"Enter the length of square: ";
			cin>>length;
			cout<<"Area of Square is : "<<(length * length)<<endl;
			
			cout<<"Area of Rectangle: "<<endl;
			cout<<"Enter the length and breadth of Rectangle: ";
			cin>>length>>breadth;
			cout<<"Area of rectangle is : "<<(length * breadth)<<endl;
			
			cout<<"Area of Circle: "<<endl;
			cout<<"Enter the radius of  circle: ";
			cin>>radius;
			cout<<"Area of circle is : "<<(3.14*radius*radius)<<endl;
		}
		void perimeter()
		{
			cout<<"\nPerimeter of Square: "<<endl;
			cout<<"Enter the length of square: ";
			cin>>length;
			cout<<"Perimeter of Square is : "<<(4 * length)<<endl;
			
			cout<<"Perimeter of Rectangle: "<<endl;
			cout<<"Enter the length and breadth of Rectangle: ";
			cin>>length>>breadth;
			cout<<"Perimeter of rectangle is : "<<(2*(length+breadth))<<endl;
			
			cout<<"Perimeter of Circle: "<<endl;
			cout<<"Enter the radius of  circle: ";
			cin>>radius;
			cout<<"Perimeter of circle is : "<<(2*3.14*radius)<<endl;
		}
	}
	
	inline namespace Display
	{
		int var;
		void display()
		{
			cout<<"\nFunction inside Inline namespace function."<<endl;
			cout<<"Enter a value: ";
			cin>>var;
			cout<<"The value entered inside Inline namespace function is : "<<var<<endl;
		}
		
	}
}

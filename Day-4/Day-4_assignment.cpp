#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
	private:
	int *left,*top,*width,*height,*area;
	public:
		void display();
		Rectangle();
		Rectangle(int width,int height,int left,int top);	
		Rectangle(float left,float top,float width,float height);
		Rectangle(Rectangle &obj);
		~Rectangle();
		 	
};

Rectangle::Rectangle()
{
	this->left=new int(0);
	this->top=new int(0);
	this->width=new int(0);
	this->height=new int(0);
	this->area=new int(0);
}

Rectangle::Rectangle(int width,int height,int left=0,int top=0)
{
	this->left=new int(left);
	this->top=new int(top);
	this->width=new int(width);
	this->height=new int(height);
	this->area=new int(0);
}

Rectangle::Rectangle(float left,float top,float width,float height)
{
	this->left=new int(round(left));
	this->top=new int(round(top));
	this->width=new int(round(width));
	this->height=new int(round(height));
	this->area=new int(0);
}

Rectangle::Rectangle(Rectangle &obj)
{
	this->left=obj.left;
	this->top=obj.top;
	this->width=obj.width;
	this->height=obj.height;
	
	area = new int((*width)*(*height));
}

void Rectangle::display()
{
	cout<<"Left value: "<<*left<<endl;
	cout<<"Top value: "<<*top<<endl;
	cout<<"Width value: "<<*width<<endl;
	cout<<"Height value: "<<*height<<endl;
	cout<<"Area is: "<<*area<<endl;
}

Rectangle::~Rectangle()
{
	cout<<"Memory freed."<<endl;
	delete left,top,width,height;
}

int main()
{
	Rectangle obj1(5,6), obj2, obj3(2,3,4,5), obj4(2.5f,1.1f,3.8f,4.2f), obj5(obj1);
	
	cout<<"Details of Object-1 (Parametrized Constructor with width and height as parameters):"<<endl;
	obj1.display();
	cout<<"\n\nDetails of Object-2 (Default Constructor):"<<endl;
	obj2.display();
	cout<<"\n\nDetails of Object-3 (Parametrized Constructor with all the values as parameters):"<<endl;
	obj3.display();
	cout<<"\n\nDetails of Object-4 (Parametrized Constructor with float parameters):"<<endl;
	obj4.display();
	cout<<"\n\nDetails of Object-5 (Copy Constructor):"<<endl;
	obj5.display();
	cout<<endl;
	
	return 0;
}

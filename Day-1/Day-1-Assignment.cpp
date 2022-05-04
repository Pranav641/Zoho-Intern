#include <bits/stdc++.h>
using namespace std;
class vehicle
{
	private:
		string vehicleType,brand,model,color;
		int price;
		float mileage;
	public:
		vehicle();
		virtual int getNoOfWheels()=0;
		friend ostream& operator << (ostream &os, vehicle &a);
		bool operator > (vehicle &obj1);		
		void getinfo();
};

ostream& operator << (ostream &x, vehicle &a)
{
	x <<"Vehicle Type: "<<a.vehicleType<<endl<< "Brand: "<<a.brand<<endl<<"Model: "<<a.model<<endl<<"Color: "<<a.color<<endl<<"Price: "<<a.price<<endl;
	return x;
}

bool vehicle:: operator > (vehicle &obj1)
{
	return this->price > obj1.price;
}

vehicle::vehicle()
{
	vehicleType="";
	brand="";
	model="";
	color="";
	price=0;
	mileage=0;
}

void vehicle::getinfo()
{
	cout<<"\nEnter the vehicle type(petrol,diesel,ev): ";
	cin>>vehicleType;
	cout<<"Enter the brand: ";
	cin>>brand;
	cout<<"Enter the model: ";
	cin>>model;
	cout<<"Enter the color: ";
	cin>>color;
	cout<<"Enter the price: ";
	cin>>price;
	cout<<"Enter mileage: ";
	cin>>mileage;
}


class car:public vehicle
{
	private:
		int no_of_persons;
		string carType;
	public:
		car();
		int getNoOfWheels();
		void get_info_car();
};

car::car()
{
	no_of_persons=0;
	carType="";
}

int car::getNoOfWheels()
{
	return 4;
}

void car::get_info_car()
{
	vehicle::getinfo();
	cout<<"Enter number of persons: ";
	cin>>no_of_persons;
	cout<<"Enter the car type: ";
	cin>>carType;
}


class bike : public vehicle
{
	private:
		int weight;
		string bikeType;
	public:
		bike();
		int getNoOfWheels();
		void get_info_bike();
	
};

bike::bike()
{
	weight=0;
	bikeType="";
}

int bike::getNoOfWheels()
{
	return 2;
}

void bike::get_info_bike()
{
	vehicle::getinfo();
	cout<<"Enter the weight of bike: ";
	cin>>weight;
	cout<<"Enter the bike type: ";
	cin>>bikeType;
}


int main()
{
	car obj1;
	bike obj2;
	obj1.get_info_car();
	obj2.get_info_bike();
	cout<<"\nCar details: "<<endl;
	cout<<obj1;
	cout<<"The number of wheels for car is: "<<obj1.getNoOfWheels()<<endl;
	cout<<"\nBike details: "<<endl;
	cout<<obj2;
	cout<<"The number of wheels for bike is: "<<obj2.getNoOfWheels()<<endl;
	
	if(obj1 > obj2)
		cout<<"\nThe price of Car is greater than bike."<<endl;
	else
		cout<<"\nThe price of Bike is greater than car."<<endl;
	return 0;
}

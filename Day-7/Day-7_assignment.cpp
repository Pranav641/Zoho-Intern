#include <bits/stdc++.h>
using namespace std;
vector<string> condition;

class TemperatureSensor
{
	public:
		int temperature,battery;
		bool status;
		
		TemperatureSensor()
		{	temperature=0; status=false; battery=100;	}
		void onConnect()
		{	status=true;  cout<<"\nTemperature Sensor status is turned ON!"<<endl;	}
		void onDisconnect()
		{	status=false; cout<<"\nTemperature Sensor status is turned OFF!"<<endl;	}
};

class MotionSensor
{
	public:
		bool status;
		int battery,distance;
		
		MotionSensor()
		{	distance=0; status=false; battery=100;	}
		void onConnect()
		{	status=true;  cout<<"\nMotion Sensor status is turned ON!"<<endl;	}
		void onDisconnect()
		{	status=false; cout<<"\nMotion Sensor status is turned OFF!"<<endl;	}
};

class WaterLevelSensor
{
	public:
		bool status;
		int battery,water_level;
		
		WaterLevelSensor()
		{	water_level=0; status=false; battery=100;	}
		void onConnect()
		{	status=true;  cout<<"\nWater Level Sensor status is turned ON!"<<endl;	}
		void onDisconnect()
		{	status=false; cout<<"\nWater Level Sensor status is turned OFF!"<<endl;	}
};

class GasDetectionSensor
{
	public:
		bool status;
		int battery,gas_level;
		
		GasDetectionSensor()
		{	gas_level=0; status=false; battery=100;	}
		void onConnect()
		{	status=true; cout<<"\nGas Detection Sensor status is turned ON!"<<endl;	}
		void onDisconnect()
		{	status=false; cout<<"\nGas Detection Sensor status is turned OFF!"<<endl;	}
};

class SmartFan
{
	public:
		bool status;
		int battery;
		
		SmartFan()
		{	status=false; battery=100; }
		void onConnect()
		{
			if(status)
				cout<<"Fan device is already in the active state!"<<endl;
			else
				{	status=true; cout<<"Fan device status is turned ON!"<<endl;	}
		}
		void onDisconnect()
		{
			if(!status)
				cout<<"Fan device is already in the inactive state!"<<endl;
			else
				{	status=false; cout<<"Fan device status is turned OFF!"<<endl;	}
		}
};

class SmartLight
{
	public:
		bool status;
		int battery;
		
		SmartLight()
		{	status=false; battery=100; }
		void onConnect()
		{
			if(status)
				cout<<"Light device is already in the active state!"<<endl;
			else
				{	status=true; cout<<"Light device status is turned ON!"<<endl;	}
		}
		void onDisconnect()
		{
			if(!status)
				cout<<"Light device is already in the inactive state!"<<endl;
			else
				{	status=false; cout<<"Light device status is turned OFF!"<<endl;	}
		}
};

class DoorControl
{
	public:
		bool status;
		int battery;
		DoorControl()
		{	status=false; battery=100; }
		void onConnect()
		{
			if(status)
				cout<<"Door is already in the active state!"<<endl;
			else
				{	status=true; cout<<"Door device status is turned ON! Door is opened!"<<endl;	}
		}
		void onDisconnect()
		{
			if(!status)
				cout<<"Door is already closed!"<<endl;
			else
				{	status=false; cout<<"Door status is turned OFF! Door is closed!"<<endl;	}
		}
};


class client
{
	public:
		// Creating objects for all the sensors and devices class 
		TemperatureSensor temperature_obj;
		MotionSensor motion_obj;
		WaterLevelSensor water_obj;
		GasDetectionSensor gas_obj;
		SmartFan fan_obj;
		SmartLight light_obj;
		DoorControl door_obj;
		// Constructor which enables the status variable of the corresponding sensor and device entered by the user
		client()
		{
			if(condition[0]=="Temperature")
				temperature_obj.onConnect();
			else if(condition[0]=="Motion")
				motion_obj.onConnect();
			else if(condition[0]=="WaterLevel")
				water_obj.onConnect();
			else if(condition[0]=="GasDetection")
				gas_obj.onConnect();			
		}
		// The below function is used to check the device and perform the corresponding function entered by the user
		void device_function()
		{
			if(condition[3]=="Fan" && condition[4]=="turnOn")
				fan_obj.onConnect();
			else if(condition[3]=="Fan" && condition[4]=="turnOff")
				fan_obj.onDisconnect();
			else if(condition[3]=="Light" && condition[4]=="turnOn")
				light_obj.onConnect();
			else if(condition[3]=="Light" && condition[4]=="turnOff")
				light_obj.onDisconnect();
			else if(condition[3]=="Door" && condition[4]=="turnOn")
				door_obj.onConnect();
			else if(condition[3]=="Door" && condition[4]=="turnOff")
				door_obj.onDisconnect();
			else
				cout<<"\nEnter a valid device and function"<<endl;
		}
		// The below function is used to check the keypress events and update the corresponding data
		void Keypress_events(string keypress)
		{
			if(keypress=="ti")
				temperature_obj.temperature++;
			else if(keypress =="td")
				temperature_obj.temperature--;
			else if(keypress=="mi")
				motion_obj.distance++;
			else if(keypress =="md")
				motion_obj.distance--;
			else if(keypress=="wi")
				water_obj.water_level++;
			else if(keypress =="wd")
				water_obj.water_level--;
			else if(keypress=="gi")
				gas_obj.gas_level++;
			else if(keypress=="gd")
				gas_obj.gas_level--;
			else
				cout<<"Enter a valid keypress event!"<<endl;			
		}
		// The below function checks the condition entered by the user and evaluate the Then: clause accordingly
		void function(string keypress)
		{
			stringstream ss(condition[2]);	// To convert the sensor_value from string data type to int data type
			int var=0,flag=0;
			ss>>var;
			
			if(condition[0]=="Temperature")
			{
				Keypress_events(keypress);
				if((condition[1]==">" && temperature_obj.temperature > var)||(condition[1]=="<" && temperature_obj.temperature < var)||(condition[1]=="=" && temperature_obj.temperature == var)||(condition[1]==">=" && temperature_obj.temperature >= var)||(condition[1]=="<=" && temperature_obj.temperature <= var) && (temperature_obj.battery>=15))
				{
					device_function();
				}
				else
				{	flag=1; }
			}
			else if(condition[0]=="Motion")
			{
				Keypress_events(keypress);				
				if((condition[1]==">" && motion_obj.distance > var)||(condition[1]=="<" && motion_obj.distance < var)||(condition[1]=="=" && motion_obj.distance == var)||(condition[1]==">=" && motion_obj.distance >= var)||(condition[1]=="<=" && motion_obj.distance <= var) && (motion_obj.battery>=15))
				{
					device_function();
				}
				else
				{	flag=1; }
			}
			else if(condition[0]=="WaterLevel")
			{
				Keypress_events(keypress);				
				if((condition[1]==">" && water_obj.water_level > var)||(condition[1]=="<" && water_obj.water_level < var)||(condition[1]=="=" && water_obj.water_level == var)||(condition[1]==">=" && water_obj.water_level >= var)||(condition[1]=="<=" && water_obj.water_level <= var) && (water_obj.battery>=15))
				{
					device_function();
				}
				else
				{	flag=1; }
			}
			else if(condition[0]=="GasDetection")
			{
				Keypress_events(keypress);	
				if((condition[1]==">" && gas_obj.gas_level > var)||(condition[1]=="<" && gas_obj.gas_level < var)||(condition[1]=="=" && gas_obj.gas_level == var)||(condition[1]==">=" && gas_obj.gas_level >= var)||(condition[1]=="<=" && gas_obj.gas_level <= var) && (gas_obj.battery>=15))
				{
					device_function();
				}
				else
				{	flag=1; }				
			}

			if(flag==1)
			{
				if(condition[3]=="Fan")
					fan_obj.onDisconnect();
				else if(condition[3]=="Light")
					light_obj.onDisconnect();
				else
					door_obj.onDisconnect();
				cout<<condition[0]<<" hasn't met the threshold!"<<endl;
			}
			cout<<"Value of Temperature is "<<temperature_obj.temperature<<endl;
			cout<<"Value of Motion distance is "<<motion_obj.distance<<endl;
			cout<<"Value of Water level is "<<water_obj.water_level<<endl;
			cout<<"Value of Gas level is "<<gas_obj.gas_level<<endl;
		}
		// Destructor which disables the status variable of the corresponding sensor and device entered by the user
		~client()
		{
			if(condition[0]=="Temperature")
				temperature_obj.onDisconnect();
			else if(condition[0]=="Motion")
				motion_obj.onDisconnect();
			else if(condition[0]=="WaterLevel")
				water_obj.onDisconnect();
			else if(condition[0]=="GasDetection")
				gas_obj.onDisconnect();
			
			if(condition[3]=="Fan")
				fan_obj.onDisconnect();
			else if(condition[3]=="Light")
				light_obj.onDisconnect();
			else if(condition[3]=="Door")
				door_obj.onDisconnect();
		}
};


int main()
{
	string s,s1,word,keypress;
	int cnt=0;
	
	cout<<"Enter the task to automate"<<endl;
	cout<<"Syntax: "<<endl;
	cout<<"If: <sensor_name> <comparison> <sensor_value>"<<endl;
	cout<<"Then: <device> <function>"<<endl;
	getline(cin,s);
	getline(cin,s1);
	stringstream ss(s);
	// The below whiile splits the If: clause depending on spaces and it is pushed into the vector
    while (ss >> word) 
    {
    	if(cnt==0)
    	{ cnt++;	continue; }	 // To skip "If:" word
        condition.push_back(word);
    }
 	cnt=0;
	stringstream ss1(s1);
	// The below whiile splits the Then: clause depending on spaces and it is pushed into the vector
    while (ss1 >> word)
	{
        if(cnt==0)
    	{ cnt++;	continue; }   // To skip "Then:" word
        condition.push_back(word);
    }
    
    client obj;
    
    cout<<"\nEnter 'ti' for \"Temperature increase\" ,'td' for \"Temperature increase\" ,'mi' for \"Motion increase\" ,'md' for \"Motion decrease\" ,'wi' for \"Water increase\" ,'wd' for \"Water decrease\" ,'gi' for \"Gas increase\" ,'gd' for \"Gas decrease\". Enter \"quit\" to end the task";
	while(1)
	{
		cout<<"\nEnter the keypress event : ";
    	cin>>keypress;
    	if(keypress.compare("quit")==0)
    		break;
    	obj.function(keypress);
	}
	
	return 0;
}

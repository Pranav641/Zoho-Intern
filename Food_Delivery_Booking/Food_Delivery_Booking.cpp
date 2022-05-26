#include <bits/stdc++.h>
using namespace std;
int NUMBER_OF_EXECUTIVES=0;
// Customer structure contains all the customers list
struct customer
{
    int id;
    string restaurant, destination, time, alloted_del_executive;
};
// Delivery structure contains the details of the delivery executive 
struct delivery
{
    int del_charge,del_allowance;
    float pickup_time, delivery_time;
};
// Order structure contains the successful order list
struct order
{
    int booking_num, count_orders, del_charge, del_allowance;
    string del_exe, restaurant, destination;
    float pickup_time, delivery_time;
};

class food_delivery
{
    static int booking_id;
    public:
        // delivery_executive map contains "DE1","DE2",etc. as keys and their corresponding details as values
        map<string, delivery> delivery_executive;
        // customers map contains customer id as keys and their corresponding details as values
        map<int, customer> customers;
        // orders map contains the booking id as keys and their corresponding details as values
        map<int, order>orders;

        food_delivery();
        void booking(int customer_id);
        string assign_del_executive(int customer_id);
        void display_activities();
};
int food_delivery::booking_id=0;

food_delivery::food_delivery()
{
    for(int i=1;i<=NUMBER_OF_EXECUTIVES;i++)
    {
        delivery_executive["DE"+to_string(i)].del_charge=0;
        delivery_executive["DE"+to_string(i)].del_allowance=0;
        delivery_executive["DE"+to_string(i)].pickup_time=0;
        delivery_executive["DE"+to_string(i)].delivery_time=0;
    }
}

// below function is used to display the delivery executive's charges earned in the form of table and calls the assign_del_executive function
void food_delivery::booking(int customer_id)
{
    cout<<"\nAvailable Executives:"<<endl;
    cout<<setw(15)<<left<<"Executive"<<setfill(' ')<<setw(25)<<left<<"Delivery Charge Earned"<<setfill(' ')<<endl;
    for(int i=1;i<=NUMBER_OF_EXECUTIVES;i++)
    {
        cout<<setw(15)<<left<<("DE"+(to_string(i)))<<setfill(' ')<<setw(25)<<left<<delivery_executive["DE"+to_string(i)].del_charge<<setfill(' ')<<endl;
    }

    string s = assign_del_executive(customer_id);
    cout<<"Allotted Delivery Executive: "<<s<<endl;
}

string food_delivery::assign_del_executive(int customer_id)
{
    bool flag = false;
    float new_order_time, prev_order_time;
    int length, prev_order_mins=0, new_order_mins=0;
    map<int, customer>::iterator it;
    // stof() is used to convert the time in string format to float value
    new_order_time = stof(customers[customer_id].time);
    length = (customers[customer_id].time).length();
 
    // below statement is used to convert to 24 hour format
    if (customers[customer_id].time[length-2]=='P'  &&  trunc(new_order_time)!=12)
        new_order_time=fmod(new_order_time+12,24);
    if (customers[customer_id].time[length-2]=='A'  &&  trunc(new_order_time)==12)
        new_order_time=fmod(new_order_time-12,24);
    // fmod(time*100,100) gives the minutes part of the time
    if (fmod(new_order_time*100,100)>=60)
       { cout<<"Enter the time correctly!!!"<<endl; flag=true; }
    
    // below for loop is used to combine the orders
    for(it=customers.begin();it!=customers.end() && !flag;it++)
    {         
        prev_order_time = stof(customers[it->first].time);
        length = (customers[it->first].time).length();

        if(customers[it->first].time[length-2]=='P'  &&  trunc(prev_order_time)!=12)
            prev_order_time= fmod(prev_order_time+12,24);

        // prev_order_mins converts the time in minutes
        prev_order_mins = trunc(prev_order_time)*60;
        prev_order_mins += fmod(prev_order_time*100,100);
        // below if statement converts new order time to minutes
        if(customers[customer_id].time[length-2]=='A' && trunc(new_order_time+12)==12 && fmod(new_order_time*100,100)<=14)
        {
            new_order_mins = (24*60)+(fmod(new_order_time*100,100));
        }
        else
        {
            new_order_mins = trunc(new_order_time)*60;
            new_order_mins += fmod(new_order_time*100,100);
        }
         
        // if both restaurant, destination is same and the time difference between prev_order_mins and new_order_mins is less than or equal to 15 minutes, then we can combine the orders
        if((customers[customer_id].restaurant == customers[it->first].restaurant) && (customers[customer_id].destination == customers[it->first].destination) && ((new_order_mins-prev_order_mins<=15)) && ((new_order_mins-prev_order_mins>0) || (new_order_mins-prev_order_mins==0 && it->first!=customer_id)))
        {
            customers[customer_id].alloted_del_executive = customers[it->first].alloted_del_executive;
            delivery_executive[customers[it->first].alloted_del_executive].del_charge += 5;
            orders[it->first].count_orders++;
            orders[it->first].del_charge += 5;
            
            flag=true;
            return (customers[customer_id].alloted_del_executive);
            break;
        }        
    }
    // below if statement gets executed if the given order can't be combined and we need to assign a new delivery executive
    if(!flag)
    {
        booking_id++;

        int i, min = INT_MAX, index=1, del_exe_mins=0;
        // below for loop is used to find the delivery executive who has minimum delivery charge and the delivery time of the person is less than the current time(in order to ensure if he is free)
        for(i=1;i<=NUMBER_OF_EXECUTIVES;i++)
        {
            // del_Exe_mins is used to convert the delivery time of the delivery executive into minutes
            del_exe_mins = trunc(delivery_executive["DE"+(to_string(i))].delivery_time)*60;
            del_exe_mins += fmod(delivery_executive["DE"+(to_string(i))].delivery_time*100,100);

            if ((delivery_executive["DE"+(to_string(i))].del_charge < min) && (del_exe_mins < prev_order_mins))
            { min = delivery_executive["DE"+(to_string(i))].del_charge; index = i; }
        }
        // assigning the pickup time to be 15 mins later than the specified pickup time as per the condition
        delivery_executive["DE"+(to_string(index))].pickup_time = fmod(prev_order_time+0.15,24);
        
        // If the minutes is greater than or equal to 60, then add one to the hours section using the if statement below. 
        if (fmod(delivery_executive["DE"+(to_string(index))].pickup_time*100,100)>=60)
            delivery_executive["DE"+(to_string(index))].pickup_time += 0.40;
        
        // above steps are followed in order to convert the same for delivery time
        delivery_executive["DE"+(to_string(index))].delivery_time = fmod(prev_order_time+0.45,24);
        if (fmod(delivery_executive["DE"+(to_string(index))].delivery_time*100,100)>=60)
            delivery_executive["DE"+(to_string(index))].delivery_time += 0.40;

        delivery_executive["DE"+(to_string(index))].del_charge += 50;
        delivery_executive["DE"+(to_string(index))].del_allowance += 10;
        customers[customer_id].alloted_del_executive = "DE"+(to_string(index));

        orders[booking_id].booking_num = booking_id;
        orders[booking_id].count_orders = 1;
        orders[booking_id].del_charge = 50;
        orders[booking_id].del_allowance = 10;

        // below statements are used to convert 60 mins to 1 hour... fmod(time*100,100) gives the digits after the decimal point(i.e, minutes) 
        orders[booking_id].pickup_time = fmod(prev_order_time+0.15,24);
        if (fmod(orders[booking_id].pickup_time*100,100)>=60)
            orders[booking_id].pickup_time += 0.40;
        orders[booking_id].pickup_time = fmod(orders[booking_id].pickup_time,24);
        
        // above logic is also implemented for delivery time
        orders[booking_id].delivery_time = fmod(prev_order_time+0.45,24);
        if (fmod(orders[booking_id].delivery_time*100,100)>=60)
            orders[booking_id].delivery_time += 0.40;
        orders[booking_id].delivery_time = fmod(orders[booking_id].delivery_time,24);

        orders[booking_id].restaurant = customers[customer_id].restaurant;
        orders[booking_id].destination = customers[customer_id].destination;
        orders[booking_id].del_exe = "DE"+to_string(index);

        return (customers[customer_id].alloted_del_executive);
    }
    return "NIL";   // in case if the user enters a wrong time (for example, 9.75 AM)
}

void food_delivery::display_activities()
{
    cout<<"\t\tDelivery History"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|"<<setw(15)<<left<<"TRIP"<<setfill(' ')<<"|"<<setw(15)<<left<<"EXECUTIVE"<<setfill(' ')<<"|"<<setw(15)<<left<<"RESTAURANT"<<setfill(' ')<<"|"<<setw(15)<<left<<"DESTINATION"<<setfill(' ')<<"|"<<setw(20)<<left<<"ORDERS COMPLETED"<<setfill(' ')<<"|"<<setw(15)<<left<<"PICKUP TIME"<<setfill(' ')<<"|"<<setw(15)<<left<<"DELIVERY TIME"<<setfill(' ')<<"|"<<setw(15)<<left<<"DELIVERY CHARGE"<<setfill(' ')<<"|"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=1;i<=booking_id;i++)
    {
        cout<<"|"<<setw(15)<<left<<i<<setfill(' ')<<"|"<<setw(15)<<left<<orders[i].del_exe<<setfill(' ')<<"|"<<setw(15)<<left<<orders[i].restaurant<<setfill(' ')<<"|"<<setw(15)<<left<<orders[i].destination<<setfill(' ')<<"|"<<setw(20)<<left<<orders[i].count_orders<<setfill(' ')<<"|";
        // below if, else-if statements are used to display the pickup time
        if(orders[i].pickup_time >= 13)
            cout<<fixed<<setprecision(2)<<(orders[i].pickup_time-12)<<setw(11)<<left<<" PM"<<setfill(' ')<<"|";
        else if(orders[i].pickup_time >= 12 && orders[i].pickup_time<=12.59)
            cout<<fixed<<setprecision(2)<<(orders[i].pickup_time)<<setw(11)<<left<<" PM"<<setfill(' ')<<"|";
        else
            cout<<fixed<<setprecision(2)<<(orders[i].pickup_time)<<setw(11)<<left<<" AM"<<setfill(' ')<<"|";
        // below if, else-if statements are used to display the delivery time
        if(orders[i].delivery_time >= 13)
            cout<<fixed<<setprecision(2)<<(orders[i].delivery_time-12)<<setw(11)<<left<<" PM"<<setfill(' ')<<"|";
        else if(orders[i].delivery_time >=12 && orders[i].delivery_time<=12.59)
            cout<<fixed<<setprecision(2)<<(orders[i].delivery_time)<<setw(11)<<left<<" PM"<<setfill(' ')<<"|";
        else
            cout<<fixed<<setprecision(2)<<(orders[i].delivery_time)<<setw(11)<<left<<" AM"<<setfill(' ')<<"|";

        cout<<setw(15)<<left<<orders[i].del_charge<<setfill(' ')<<"|"<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }

    cout<<"\n\t\tTotal Earned:"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|"<<setw(15)<<left<<"EXECUTIVE"<<setfill(' ')<<"|"<<setw(15)<<left<<"ALLOWANCE"<<setfill(' ')<<"|"<<setw(20)<<left<<"DELIVERY CHARGES"<<setfill(' ')<<"|"<<setw(15)<<left<<"TOTAL"<<setfill(' ')<<"|"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    for(int i=1;i<=NUMBER_OF_EXECUTIVES;i++)
    {
        cout<<"|"<<setw(15)<<left<<("DE"+to_string(i))<<setfill(' ')<<"|"<<setw(15)<<left<<delivery_executive["DE"+to_string(i)].del_allowance<<setfill(' ')<<"|"<<setw(20)<<left<<delivery_executive["DE"+to_string(i)].del_charge<<setfill(' ')<<"|"<<setw(15)<<left<<(delivery_executive["DE"+to_string(i)].del_allowance + delivery_executive["DE"+to_string(i)].del_charge)<<setfill(' ')<<"|"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
    }
}

int main()
{
    int choice, customer_id;
    cout<<"Enter the number of delivery executives: ";
    cin>>NUMBER_OF_EXECUTIVES;
    food_delivery obj;
    do
    {
        cout<<"\nEnter 1. To handle booking   2. To display delivery executive's activity   3. To exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: {
                cout<<"Enter the Customer ID: ";
                cin>>customer_id;
                obj.customers[customer_id].id = customer_id;
                cout<<"Enter the Restaurant: ";
                cin>> obj.customers[customer_id].restaurant;
                cout<<"Enter the Destination point: ";
                cin>> obj.customers[customer_id].destination;
                cout<<"Enter the Time: ";
                getline(cin>>ws, obj.customers[customer_id].time);
             
                obj.booking(customer_id);
                break;
            }
            case 2: {
                obj.display_activities();
                break;
            }
            case 3: cout<<"Control is exited!!!"<<endl;   break;
            default: cout<<"Enter a valid choice!!!"<<endl;
        }
    }while(choice!=3);
    return 0;
}
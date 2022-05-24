#include <bits/stdc++.h>
using namespace std;

class ATM
{
	int denominations[2];
	static int transaction_number;
	public:
		ATM();
		void loadCash();
		void showCustomerDetails();
		void showAtmOperations();

};
int ATM::transaction_number=0;

ATM::ATM()
{
	// denominations[0] stores the number of Rs.2000 notes. denominations[1] stores the number of Rs.500 notes. denominations[2] stores the number of Rs.100 notes
	for(int i=0;i<3;i++)
		denominations[i]=0;
}

void ATM::loadCash()
{
	cout<<"Enter the denomination of Rs. 2000:  ";
	cin>>denominations[0];
	cout<<"Enter the denomination of Rs. 500:  ";
	cin>>denominations[1];
	cout<<"Enter the denomination of Rs. 100:  ";
	cin>>denominations[2];

	fstream file;
	file.open("ATM_details.txt");
	string denomination,value;
	if(!file)
		cout<<"Error in file opening!";
	else
	{
		file.seekg(0,ios::end);
		int length = file.tellg();
		// if condition is used to check whether is there any denomination notes available in the ATM.
		// If the condition is true, then write the inputted denominations to the file. Else add the previous denomination notes with the new inputted notes.
		if(!length)
		{
			file.clear();
			file.seekg(0);
			file<<"2000 "<<denominations[0]<<endl;
			file<<"500 "<<denominations[1]<<endl;
			file<<"100 "<<denominations[2]<<endl;
		}
		else
		{
			file.seekg(0);
			int position=0;
			
			file>>denomination;		file>>value;		file.seekg(position);
			denominations[0] = (stoi(value)+denominations[0]);
			file<<denomination<<" "<<denominations[0]<<endl;
			position = file.tellg();
			
			file>>denomination;		file>>value;		file.seekg(position);
			denominations[1] = (stoi(value)+denominations[1]);
			file<<denomination<<" "<<denominations[1]<<endl;
			position = file.tellg();

			file>>denomination;		file>>value;		file.seekg(position);
			denominations[2] = (stoi(value)+denominations[2]);
			file<<denomination<<" "<<denominations[2]<<endl;
		}
		file.close();
	}	
	// To display the denomination notes in the form of a table
	cout<<"\n\nDisplaying the denomination in the ATM: "<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"|"<<setw(15)<<left<<"Denomination"<<setfill(' ')<<"|"<<setw(10)<<left<<"Number"<<setfill(' ')<<"|"<<setw(10)<<left<<"Value"<<setfill(' ')<<"|"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"|"<<setw(15)<<left<<"2000"<<setfill(' ')<<"|"<<setw(10)<<left<<denominations[0]<<setfill(' ')<<"|"<<setw(10)<<left<<(2000*denominations[0])<<setfill(' ')<<"|"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"|"<<setw(15)<<left<<"500"<<setfill(' ')<<"|"<<setw(10)<<left<<denominations[1]<<setfill(' ')<<"|"<<setw(10)<<left<<(500*denominations[1])<<setfill(' ')<<"|"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"|"<<setw(15)<<left<<"100"<<setfill(' ')<<"|"<<setw(10)<<left<<denominations[2]<<setfill(' ')<<"|"<<setw(10)<<left<<(100*denominations[2])<<setfill(' ')<<"|"<<endl;
	cout<<"---------------------------------------"<<endl;
}

void ATM::showCustomerDetails()
{
	// Here it is assumed that all the account holder names are available in the Customer_details.txt file and no entry can be added while
	// the program runs because in ATM, one cannot create a account.
	fstream file;
	string acc_no,acc_holder,pin,acc_balance;
	file.open("Customer_details.txt",ios::in);
	if(!file)
		cout<<"Error in file opening!";
	else
	{
		// To display the customer details in the form of a table
		cout<<"\n\nDisplaying the customer details: "<<endl;
		cout<<"---------------------------------------------------------------"<<endl;
		cout<<"|"<<setw(10)<<left<<"Acc No"<<setfill(' ')<<"|"<<setw(15)<<left<<"Account Holder"<<setfill(' ')<<"|"<<setw(15)<<left<<"Pin Number"<<setfill(' ')<<"|"<<setw(18)<<left<<"Account Balance"<<setfill(' ')<<"|"<<endl;
		cout<<"---------------------------------------------------------------"<<endl;
		while(file)
		{
			file>>acc_no;
			if(file.eof())
				break;
			file>>acc_holder;
			file>>pin;
			file>>acc_balance;
			
			cout<<"|"<<setw(10)<<left<<acc_no<<setfill(' ')<<"|"<<setw(15)<<left<<acc_holder<<setfill(' ')<<"|"<<setw(15)<<left<<pin<<setfill(' ')<<"|"<<"Rs."<<setw(15)<<left<<acc_balance<<setfill(' ')<<"|"<<endl;
			cout<<"---------------------------------------------------------------"<<endl;
		}
	}
    file.close();
}

void ATM::showAtmOperations()
{
	int acc_num,pin_num,choice,sender_file_pos=0,check=0;
	bool flag=false;
	string sender_acc_no,sender_acc_holder,sender_pin,sender_acc_balance;

	cout<<"\nEnter the Account Number: ";
	cin>>acc_num;
	cout<<"Enter the Pin number: ";
	cin>>pin_num;
	
	fstream file_sender;
	file_sender.open("Customer_details.txt",ios::out|ios::in);
	if(!file_sender)
		cout<<"Error in file opening!";
	else
	{
		// while loop is to check whether the account number is present in the Customer_details file
		while(file_sender)
		{
			sender_file_pos = file_sender.tellg();
			file_sender>>sender_acc_no;
			if(file_sender.eof())
				break;
			file_sender>>sender_acc_holder;
			file_sender>>sender_pin;
			file_sender>>sender_acc_balance;
			// if there exists the account number in the file, then flag is set to true
			if((stoi(sender_acc_no)==acc_num) && (stoi(sender_pin)==pin_num))
			{
				flag = true; break;
			}
		}
		if(flag)
		{
			cout<<"\nEnter 1. Check Balance   2. Withdraw money   3. Transfer money   4. Check ATM Balance   5. Mini Statement"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1: {
					cout<<"Balance amount from the account with Account number "<<sender_acc_no<<" is: "<<sender_acc_balance<<endl;
					break;
				}
				case 2: {
					int amount, pin_no, remaining_amount=0;
					cout<<"Enter the amount to be withdrawn: ";
					cin>>amount;
					// if the amount to be withdrawn is greater than 10000 or lesser than 100 then alert message is shown
					if(amount<100 || amount>10000)
						cout<<"Max withdrawal limit for a single transaction is Rs.10,000 and minimum is Rs.100!!!"<<endl;
					else
					{
						cout<<"Enter the Pin number: ";
						cin>>pin_no;
						// To crossverify the PIN number entered by the customer for every subsequent withdrawal
						if(pin_num!=pin_no)
						{	cout<<"Action failed...Pin Number not matched!!!"<<endl; break; }
						// To check if the sender's account balance has less money compared to the withdrawal amount
						if(stoi(sender_acc_balance) < amount)
						{	cout<<"Account balance is lower than the entered withdrawal amount!!!"<<endl; break; }
			
						fstream file_withdraw;
						file_withdraw.open("ATM_details.txt",ios::out|ios::in);
						if(!file_withdraw)
							cout<<"Error!"<<endl;
						else
						{
							string denomination, value;
							int i=0;
							// while loop is used to extract the number of Rs.2000, Rs.500, Rs.100 denomination notes available in the ATM
							while(file_withdraw)
							{
								file_withdraw >> denomination;
								if(file_withdraw.eof())
									break;				
								file_withdraw >> value;
								denominations[i++] = (stoi(value));
							}
						}							

						int i,j,k,denom_2000,denom_500,denom_100;
						// below if statement is used to check whether the user enters the amount in the multiples of 100 so that it can be vended
						if(amount%100!=0)
							cout<<"Enter a proper amount!!!"<<endl;
						else if(amount>5000)
						{
							// inorder to satisfy the conditions(minimum 2-Rs.2000 and minimum 2-Rs.500), amounts ranging from 5000 to 5500 
							// cannot be vended to minimum of 10 currency notes to maximum of 15 currency notes 
							if(amount>5000 && amount<=5500)
							{
								denom_2000 = amount/2000;
								denom_500 = (amount%2000)/500;
								denom_100 = ((amount%2000)%500)/100;
								if(denom_2000<=denominations[0] && denom_500<=denominations[1] && denom_100<=denominations[2])
								{	check=1; }
							}
							else
							{
								// for remaining amounts from 5600 to 10000, it can be vended by using a nested for, where i is initialised to 
								// 4000(because it is mentioned that minimum 2-Rs.2000 must be vended), j is initialised to 1000(minimum 2-Rs.500
								// notes must be vended) and the condition part of inner loop is k<=1000(because maximum of only 10-Rs.100 notes
								// can be vended)
								for(i=4000;i<=amount;i+=2000)
								{
									for(j=1000;j<=amount;j+=500)
									{
										for(k=100;k<=1000;k+=100)
										{
											denom_2000 = i/2000; denom_500 = j/500;  denom_100 = k/100;
											if((i+j+k==amount && ((i/2000)+(j/500)+(k/100))>=10 && ((i/2000)+(j/500)+(k/100))<=15) && (denom_2000<=denominations[0] && denom_500<=denominations[1] && denom_100<=denominations[2]))
											{
												check=1; break;
											}
										}
										if(check==1) break;
									}
									if(check==1) break;
								}
							}
						}
						else
						{
							// below if statement is used to satisfy the condition(reduce for lesser amount - Rs.100 to Rs.1000)
							if(amount<=1000)
							{
								denom_2000 = 0; denom_500 = amount/500; denom_100 = (amount%500)/100;
								check=1;
							}
							else if(amount>1000 && amount<=3000)
							{
								// A22mount ranging from Rs.1000 to Rs.3000 can be vended by initialising i to 500(because it is mentioned that minimum
								// of 1-Rs.500 note must be vended)
								for(i=500;i<=amount;i+=500)
								{
									for(j=100;j<=amount;j+=100)
									{
										denom_2000 = 0; denom_500 = i/500;  denom_100 = j/100;
										if ((i+j==amount && ((i/500)+(j/100))>=10 && ((i/500)+(j/100))<=15) && (denom_500<=denominations[1] && denom_100<=denominations[2]))
										{ check=1; break; }
									}
									if(check==1) break;
								}
							}
							else
							{
								// Amount ranging from Rs.3100 to Rs.5000 can be vended by initialising i to 2000(because it is mentioned that minimum
								// of 1-Rs.2000 note must be vended), j is initialised to 500(because atleast 1-Rs.500 note must be vended)
								for(i=2000;i<=amount;i+=2000)
								{
									for(j=500;j<=amount;j+=500)
									{
										for(k=100;k<=amount;k+=100)
										{
											denom_2000 = i/2000; denom_500 = j/500;  denom_100 = k/100;
											if ((i+j+k==amount && ((i/2000)+(j/500)+(k/100))>=10 && ((i/2000)+(j/500)+(k/100))<=15) && (denom_2000<=denominations[0] && denom_500<=denominations[1] && denom_100<=denominations[2]))
											{ check=1; break; }
										}
										if(check==1) break;
									}
									if(check==1) break;
								}
								
							}
						}
						if(check==0)
							cout<<"No sufficient denominations in the ATM"<<endl;
						else
						{
							cout<<"Rs.2000 = "<<denom_2000<<"\nRs.500 = "<<denom_500<<"\nRs.100 = "<<denom_100<<endl;
							transaction_number++;
							file_withdraw.clear();
							file_withdraw.seekg(0);
							// below statements modify the changes in denomination in the ATM_details file
							file_withdraw <<"2000 "<<(denominations[0]-denom_2000)<<endl;
							file_withdraw <<"500 "<<(denominations[1]-denom_500)<<endl;
							file_withdraw <<"100 "<<(denominations[2]-denom_100)<<endl;
							file_withdraw.close();
							// below statements modify the changes in denomination in the Customer_details file
							file_sender.seekg(sender_file_pos);
							file_sender>>sender_acc_no;
							file_sender>>sender_acc_holder;
							file_sender>>sender_pin;
							file_sender<<" "<<(stoi(sender_acc_balance)-amount);
							file_sender.close();

							fstream file_thread_sender;

							file_thread_sender.open((sender_acc_no+"_transactions.txt").c_str(),ios::app);
							if(!file_thread_sender)
								cout<<"Error!"<<endl;
							else
							{
								// below statement is used to write the description in the corresponding file using asynchronous thread with a delay of 5sec
								future<void> thread_withdraw = async(launch::async,[&](){
									file_thread_sender << transaction_number <<"-"<< "Cash Withdrawal-"<<"Debit"<<"-"<< amount<<"-"<<(stoi(sender_acc_balance)-amount)<<endl;
									this_thread::sleep_for(5000ms);
								});
							}							

						}						
					}
					break;
				}
				case 3: {
					fstream file_thread_sender, file_thread_receiver;
					int amount;
					cout<<"Enter the amount to be transferred: ";
					cin>>amount;
					if(amount<1000 || amount>10000)
						cout<<"Max transfer limit per transaction cannot exceed Rs.10,000 and should be more than Rs.1000!!!"<<endl;
					else
					{
						file_thread_sender.open((sender_acc_no+"_transactions.txt").c_str(),ios::app);

						int receiver_file_pos=0;
						string receiver_acc_num, receiver_acc_no, receiver_acc_holder, receiver_pin, receiver_acc_balance;
						fstream file_receiver;

						cout<<"Enter the Account number to which money should be transferred: ";
						cin>>receiver_acc_num;
						
						file_receiver.open("Customer_details.txt",ios::out|ios::in);
						if(!file_receiver)
							cout<<"Error!";
						else
						{
							flag = false;
							// Below while loop is used to check whether the entered receiver account number is in the Customer_details file
							while(file_receiver)
							{
								receiver_file_pos = file_receiver.tellg();
								file_receiver>>receiver_acc_no;
								if(file_receiver.eof())
									break;
								file_receiver>>receiver_acc_holder;
								file_receiver>>receiver_pin;
								file_receiver>>receiver_acc_balance;
								
								if(stoi(receiver_acc_no) == stoi(receiver_acc_num))
								{	flag=true; break;}
							}
							if(flag)
							{
								file_thread_receiver.open((receiver_acc_no+"_transactions.txt").c_str(),ios::app);
								// If the sender has less money to transfer, then alert message is shown
								if(stoi(sender_acc_balance) < amount)
									cout<<"Sender Account Number - "<<sender_acc_no<<" don't have sufficient money to transfer"<<endl;
								else
								{
									file_sender.seekg(sender_file_pos);
									file_receiver.seekg(receiver_file_pos);

									transaction_number++;
									// first 3 lines read the corresponding data and 4th line is used to replace the balance money of sender
									file_sender >> sender_acc_no;
									file_sender >> sender_acc_holder;
									file_sender >> sender_pin;
									file_sender << " " << (stoi(sender_acc_balance) - amount);
									// first 3 lines read the corresponding data and 4th line is used to replace the balance money of receiver
									file_receiver >> receiver_acc_no;
									file_receiver >> receiver_acc_holder;
									file_receiver >> receiver_pin;
									file_receiver << " " << (stoi(receiver_acc_balance) + amount);

									// fstream file_sender, file_receiver;
									// file_sender.open("Customer_details.txt",ios::out | ios::in);
									// file_receiver.open("Customer_details.txt",ios::out | ios::in);
									// below lines are used to write the description using asynchronous thread with a delay of 5 seconds
									future<void> thread_sender = async(launch::async,[&](){
										file_thread_sender << transaction_number <<"-"<< "Transfer to "<< receiver_acc_no<<"-"<<"Debit"<<"-"<< amount<<"-"<<(stoi(sender_acc_balance)-amount)<<endl;
										this_thread::sleep_for(5000ms);
									});
									future<void> thread_receiver = async(launch::async,[&](){
										file_thread_receiver << transaction_number <<"-"<< "Transfer from "<< sender_acc_no<<"-"<<"Credit"<<"-"<< amount<<"-"<<(stoi(receiver_acc_balance)+amount)<<endl;
										this_thread::sleep_for(5000ms);
									});
								}
							}
							else
								cout<<"Account Number not found!!!"<<endl;
						}
					}
					break;
				}

				case 4: {
					cout<<"Displaying the ATM Balance: "<<endl;
					fstream file_atm;
					file_atm.open("ATM_details.txt",ios::in);
					if(!file_atm)
						cout<<"Error!";
					else
					{
						string denom, number;
						int value,sum=0;
						cout<<"---------------------------------------"<<endl;
						cout<<"|"<<setw(15)<<left<<"Denomination"<<setfill(' ')<<"|"<<setw(10)<<left<<"Number"<<setfill(' ')<<"|"<<setw(10)<<left<<"Value"<<setfill(' ')<<"|"<<endl;
						cout<<"---------------------------------------"<<endl;
						
						while(true)
						{
							file_atm >> denom;
							if(file_atm.eof())
								break;				
							file_atm >> number;							
							value = stoi(denom) * stoi(number);
							sum += value;	// sum is to calculate the total money available in the ATM
							
							cout<<"|"<<setw(15)<<left<<denom<<setfill(' ')<<"|"<<setw(10)<<left<<number<<setfill(' ')<<"|"<<setw(10)<<left<<(value)<<setfill(' ')<<"|"<<endl;
							cout<<"---------------------------------------"<<endl;
						}						
						cout<< "Total Amount available in the ATM = Rs."<<sum<<endl;
					}
					break;
				}
				case 5: {
					fstream file_mini;
					string transaction_num, description, type, amount_mini,balance_mini;
					file_mini.open((sender_acc_no+".txt").c_str(),ios::out | ios::in);
					if(!file_mini)
						cout<<"Error";
					else
					{
						int no_of_lines=0;
						// below while loop is used to count the number of lines from the file in order to display only the last 10 observations
						while(file_mini)
						{
							string line;
							getline(file_mini,line);
							if(file_mini.eof())
								break;
							no_of_lines++;
						}
						cout<<"No of lines: "<<no_of_lines<<endl;

						file_mini.seekg(0);
						cout<<"------------------------------------------------------------------------------------------------"<<endl;
						cout<<"|"<<setw(20)<<left<<"Transaction Number"<<setfill(' ')<<"|"<<setw(20)<<left<<"Description"<<setfill(' ')<<"|"<<setw(15)<<left<<"Credit/Debit"<<setfill(' ')<<"|"<<setw(15)<<left<<"Amount"<<setfill(' ')<<"|"<<setw(20)<<left<<"Closing Balance"<<setfill(' ')<<"|"<<endl;
						cout<<"------------------------------------------------------------------------------------------------"<<endl;
						if(file_mini)
						{
							// below for loop is used to print the last 10 observations
							for(int p=1;p<=no_of_lines;p++)
							{
								getline(file_mini, transaction_num,'-');
								getline(file_mini, description,'-');
								getline(file_mini, type,'-');
								getline(file_mini, amount_mini,'-');
								getline(file_mini, balance_mini);
								if((no_of_lines-p)<10)
								{
									cout<<"|"<<setw(20)<<left<<transaction_num<<setfill(' ')<<"|"<<setw(20)<<left<<description<<setfill(' ')<<"|"<<setw(15)<<left<<type<<setfill(' ')<<"|"<<setw(15)<<left<<amount_mini<<setfill(' ')<<"|"<<setw(20)<<left<<balance_mini<<setfill(' ')<<"|"<<endl;
									cout<<"------------------------------------------------------------------------------------------------"<<endl;
								}
							}
						}
					}										
					break;
				}
				default: cout<<"Enter a valid choice!!!"<<endl;
			}			
		}
		else
			cout<<"Error!!! Account Number and Pin number didn't match!!!"<<endl;
	}		
}

int main()
{
	ATM obj;
	int choice;
	cout<<"\t\t\t\t\t\t\t\t\tATM Process Management"<<endl;
	do
	{
		cout<<"\nEnter  1. To load cash   2. To show customer details   3. To show ATM operations   4. Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: obj.loadCash(); break;
			case 2: obj.showCustomerDetails(); break;
			case 3: obj.showAtmOperations(); break;
			case 4: cout<<"Control is exited!!!"; break;
			default: cout<<"Enter a valid choice!!!";
		}
	}while(choice!=4);

	return 0;
}
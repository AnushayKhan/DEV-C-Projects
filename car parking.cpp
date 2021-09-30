#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string username, password;
	cout<<"Enter your username: ";
	cin>>username;
	if(username=="user1")
	{
	cout<<"Enter your password: ";
	cin>>password;
	if(password=="access")
	{
	cout<<"Access granted!"<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	cout<<"Welcome to Civil Aviation's parking system"<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	int input;
	int count=0,bike=0,car=0,bus=0,amount=0,hours; 
	while (true)
	{
	cout<<"Press 1 for Bike"<<endl;
	cout<<"Press 2 for cars"<<endl;
	cout<<"Press 3 for Bus"<<endl;
	cout<<"Press 4 to check the record"<<endl;
	cout<<"Press 5 to delete the record"<<endl;
	cout<<"Press 6 to search the record information"<<endl;
	cin>>input;
               if (input==1)
               {
	if (count<=50  && bike<30)
	{
	cout<<"Enter approx hours for parking your bike: "<<endl;
	cin>>hours;
	if(hours<=2)
	{
	amount=amount+10;	
	bike++;
	count++;
	}
	else if(hours<=4)
	{
	amount=amount+20;
	bike++;
               count++;
	}
	else if(hours<=6)
	{
	amount=amount+30;
	bike++;
               count++;
	}
	else
	{
	cout<<"Maximum limit for parking is 6 hours"<<endl<<endl;
	}
	}
	else
	{
	cout<<"***************************************"<<endl<<endl;
	cout<<"No more space for bikes"<<endl<<"Limit Reached"<<endl<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	}
	else if (input==2)
	{
	if (count<=50  && car<15)
	{
	cout<<"Enter approx hours for parking your car: "<<endl;
	cin>>hours;
	if(hours<=2)
	{
	amount=amount+30;
	car++;
	count++;	
	}
	else if(hours<=4)
	{
	amount=amount+40;
	car++;
	count++;
	}
	else if(hours<=6)
	{
	amount=amount+50;
	car++;
	count++;
	}
	else
	{
	cout<<"Maximum limit for parking is 6 hours"<<endl<<endl;
	}
	}
	else
	{
	cout<<"***************************************"<<endl<<endl;
	cout<<"No more space for cars"<<endl<<"Limit Reached"<<endl<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	}
	else if (input==3)
	{
	if (count<=50  && bus<5)
	{
	cout<<"Enter approx hours for parking your bus: "<<endl;
	cin>>hours;
	if(hours<=2)
	{
	amount=amount+80;
	bus++;
	count++;	
	}
	else if(hours<=4)
	{
	amount=amount+90;
	bus++;
	count++;
	}
	else if(hours<=6)
	{
	amount=amount+100;
	bus++;
	count++;
	}
	else
	{
	cout<<"Maximum limit for parking is 6 hours"<<endl<<endl;
	}
	}
	else
	{
	cout<<"***************************************"<<endl<<endl;
	cout<<"No more space for buses"<<endl<<"Limit Reached"<<endl<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	}
	else if (input==4)
	{
	cout<<"***************************************"<<endl<<endl;
	cout<<"The total Amount = "<<amount<<endl;
	cout<<"Total Vehicles Parked ="<<count<<endl;
	cout<<"Total bikes ="<<bike<<endl;
	cout<<"Total cars ="<<car<<endl;
	cout<<"Total buses ="<<bus<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	else  if (input==5)
	{
	cout<<"***************************************"<<endl<<endl;
	amount=0;
	car=0;
	bike=0;
	bus=0;
	count=0;
	cout<<"Record Deleted"<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	else 
	{
	cout<<"***************************************"<<endl<<endl;
	cout<<"Invalid number"<<endl<<endl;
	cout<<"***************************************"<<endl<<endl;
	}
	}
              }
	else
	{
	cout<<"Access denied";
	}
	}
	else
	{
	cout<<"Access denied";
	}
	return 0;
	}


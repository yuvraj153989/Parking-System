#include<iostream>
using namespace std;
int main()
{
	int c=0,r=0,b=0;
	int input;
	int amount=0,count=0;
	
	//menu
	
	while(true)
	{
	cout<<"Press 1 for Rickshaw"<<"\n";
	cout<<"Press 2 for Car"<<"\n";
	cout<<"Press 3 for Bus"<<"\n";
	cout<<"Press 4 to show records"<<"\n";
	cout<<"Press 5 to delete Records"<<"\n";
	cin>>input;
	if(input==1)
	{
		if(count<=50)
		{
		r=r+1;
		amount=amount+100;
		count=count+1;
	    }
	    else
	    {
	    	cout<<"No more Vehicles, Parking full ! "<<"\n";
		}
	}
	else if(input==2)
	{
		if(count<=50)
		{
		c=c+1;
		amount=amount+200;
		count=count+1;
	    }
	    else
	    {
	    	cout<<"No more Vehicles, Parking full ! "<<"\n";
		}
	    
	}
	else if(input==3)
	{
		if(count<=50)
		{
		b=b+1;
		amount=amount+200;
		count=count+1;
	    }
	    else
	    {
	    	cout<<"No more Vehicles, Parking full ! "<<"\n";
		}
	}
	else if(input==4)
	{
		cout<<"****************************************************"<<"\n";
		cout<<"total amount is: "<<amount<<"\n";
		cout<<"total number of vehicles in parking lot is: "<<count<<"\n";
		cout<<"Total numbers of Rickshaw: "<<r<<"\n";
		cout<<"Total numbers of Car: "<<c<<'\n';
		cout<<"Total numbers of Bus: "<<b<<"\n";
		cout<<"****************************************************"<<"\n";
	}
	else if(input==5)
	{
		amount=0;
		count=0;
		r=0;
		c=0;
		b=0;
		cout<<"**************************************************************"<<"\n";
		cout<<"!! RECORD DELETED !!"<<'\n';
		cout<<"**************************************************************"<<"\n";
	}
	else
	{
		cout<<"Invalid Number! "<<"\n";
	}
}
}
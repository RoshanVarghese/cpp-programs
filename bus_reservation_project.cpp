#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;
static int p=0;

class Platform
{
    string busn[20],driver[20],arrival[20],depar[20],from[20],to[20],seat[8][4];
	public:
		void install();
		void allotment();
		void empty();
		void show();
		void avail();
		void position(int i);
};

Platform bus[10];

void Platform::install()
{
	cout<<"Enter bus number:\t";
	cin>> bus[p].busn[20];
	cout<<"\n Enter drivers name:\t";
	cin>>bus[p].driver[20];
	cout<<"\n Starting point:\t";
	cin>>bus[p].from[20];
	cout<<"\n Destination:\t";
	cin>>bus[p].to[20];
	cout<<"\n Arrival time:\t";
	cin>>bus[p].arrival[20];
	cout<<"\n Departure time:\t";
	cin>>bus[p].depar[20];
	bus[p].empty();
	p++;   
}

void Platform::allotment()
{
	int seat;
	cout<<bus[0].busn[20];
	string number[20];
	top:
		cout<<"\nBus No:";
		//cin>>number[20];
		int n;
		for(n=0;n<=p;n++)
		{
			//if(strcmp(bus[n].busn,number[20])==0){
			//	break;
			//}
			if(bus[n].busn[20]==number[20])
			break;
		}
		while(n<=p)
		{
			cout<<"\n Seat number:\t";
			cin>>seat;
			if(seat>32)
			{
				cout<<"\n\t There are only 32 seats available in this bus."
				    <<"\n\t Please enter a seat number less than 32"<<endl;
			}
			else
			{
				cout<<bus[n].seat[seat/4][(seat%4)-1]<<"\n";
				//(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
				if(bus[n].seat[seat/4][(seat%4)-1]=="Empty")
				{
					cout<<"\n Enter passengers name:\t";
					cin>>bus[n].seat[seat/4][(seat%4)-1];
					break;
				}
				else
				cout<<"\n \t Sorry!!! This seat is already reserved"<<endl;
			}
		}
		if(n>p)
		{
			 cout<<"\n\tEnter correct bus number:"<<endl;
			goto top;
		}
}

void Platform::empty()
{
	for(int i=0;i<=8;i++)
	{
		for(int j=0;j<=4;j++)
		{
			bus[p].seat[i][j]="Empty";
		}
	}
}

void Platform::show()
{
	/*int n=0;
	string number[20];
	cout<<"\n\tEnter the bus number:\t";
	cin>>number[20];
	cout<<number;
	for(n=0;n<=p;n++)
	{
		if(bus[n].busn!=number)
		{
			cout<<number;
		cout<<"Hello"<<endl;
		break;
	    }
	}
	while(n<=p)
	{
		cout<<"\n Bus number:\t"<<bus[n].busn[20]
		<<"\n Driver:\t"<<bus[n].driver[20]
		<<"\n From:\t"<<bus[n].from[20]
		<<"\n To:\t "<<bus[n].to[20]
		<<"\n Arrival time:\t"<<bus[n].arrival[20]
		<<"\n Departure time:\t"<<bus[n].depar[20];
		bus[n].position(n);
		int a=1;
		for(int i=0;i<=8;i++)
		for(int j=0;j<=4;j++)
		{
			a++;
			//(strcmp(bus[n].seat[i][j],"Empty")!=0)
			if(bus[n].seat[i][j]!="Empty")
			cout<<"\n The seat no"<<a-1<<"is reserved for"<<bus[n].seat[i][j]<<".";
		}
		break;
	}
	if(n>p)
	cout<<"\n\tPlease enter the correct bus number"<<endl;*/
}

void Platform::position(int l)
{
	/*int s=0;q=0;
	for(int i=0;i<=8;i++)
	{
		cout<<"\n";
		for(int j=0;j<=4;i++)
		{
			s++;
			if(strcmp(bus[l].seat[i][j],"Empty")==0)
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
				q++;
			}
			else
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
			}
		}
	}
	cout<<"\n\n\t There are "<<q<<"seats empty in bus number: \t"<<bus[l].busn<<endl;*/
}

void Platform::avail()
{
	/*for(int n=0;n<p;n++)
	{
		cout<<"\n Bus number:\t"<<bus[n].busn
		<<"\n Driver:\t"<<bus[n].driver
		<<"\n From:\t"<<bus[n].from
		<<"\n To:\t "<<bus[n].to
		<<"\n Arrival time:\t"<<bus[n].arrival
		<<"\n Departure time:\t"<<bus[n].depar;
	}*/
}

int main()
{
	int choice;
	cout<<"\t\t\t\tBus reservation portal"<<endl;
	do
	{
		cout<<"\n\t\t\t 1. Install"<<endl
	        <<"\t\t\t 2. Reservation"<<endl
	        <<"\t\t\t 3. Show"<<endl
	        <<"\t\t\t 4. Buses available"<<endl
	        <<"\t\t\t 5. Exit"<<endl
	        <<"\n\n\t Enter your choice:\t";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1: bus[p].install();
	    	        break;
	    	case 2: bus[p].allotment();
	                break;
    	    case 3: bus[p].show();
    	            break;
    	    case 4: bus[p].avail();
    	            break;
    	    case 5: exit(0);
    	            break;
    	    default:cout<<"\n\t\t\tInvalid choice"<<endl;
        }
	}while(choice==1 || choice==2 || choice==3 || choice==4);
	cout<<"\n\n\t\t\t\t*******End of program*******"<<endl;
	return 0;     
}

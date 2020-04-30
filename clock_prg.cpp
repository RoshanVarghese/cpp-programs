#include<iostream>
using namespace std;
class Clock
{
	int hh,mm,ss,totsec;
	public:
		void entertime();
		void displaytime();
		void totalseconds();
};

int main()
{
	Clock c1;
	char ch='a';
	do{
		system("cls");
		cout<<"\n\n\tProgram to read time in HH:MM:SS\n"<<endl;
		c1.entertime();
		c1.displaytime();
		c1.totalseconds();
		cout<<"\n\nDo you wish to repeat it once again(y/n):\t"<<endl;
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	cout<<"\n\n**********End of program*********"<<endl;
	return 0;
}

void Clock::entertime()
{
	cout<<"\nEnter time:"<<endl;
	cout<<"Hours ?:\t";
	cin>>hh;
	cout<<"\nMinutes ?:\t";
	cin>>mm;
	cout<<"\nSeconds ?:\t";
	cin>>ss;
}

void Clock::displaytime()
{
	cout<<"\nThe time is\t"<<hh
	    <<":"<<mm
	    <<":"<<ss;    
}

void Clock::totalseconds()
{
	cout<<"\nThe total seconds is:";
	totsec=hh*3600+mm*60+ss;
	cout<<totsec;
}

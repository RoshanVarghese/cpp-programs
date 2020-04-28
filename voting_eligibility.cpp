#include<iostream>
using namespace std;
int main(){
	char ch='a';
	int age,choice;
	do{
    	system("cls");
    	cout<<"Are you here to check if you are eligible to vote ?"<<endl
    	    <<"1. Yes"<<endl
    	    <<"2. No"<<endl
	    <<"3. Exit"<<endl;
    	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice){
        	case 1: cout<<"Enter your age user:";
                	cin>>age;
                	if(age>=18){
            		cout<<"\nYou are eligible to vote"<<endl;
                	}
                	else{
            		cout<<"You are not eligible to vote"<<endl;
                	}
                	break;
                case 2: cout<<"Please give way for others and"<<endl;
			        break;
	        case 3: exit(0);        
		default:cout<<"Invalid choice"<<endl;
			break;
	    }
        cout<<"Enter y if there are other users"<<endl;
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"*********End of program*********";
	return 0;
}

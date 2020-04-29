#include<iostream>
using namespace std;
void sumprime(int i,int j,int num);
int main(){
	int num,i,j;
	char ch='a';
	do{
	      system("cls");
	      cout<<"Program to find if a number can be expressed as a sum of two prime numbers\n\n"<<endl;
    	      cout<<"Enter the number:\t";
    	      cin>>num;
    	      for(i=0;i<=num/2;i++){
    		  for(j=0;j<=num;j++){
    		       if(num==i+j){
    		       sumprime(i,j,num);
    		       }
    		  }
    	       }
    	       cout<<"\n\nDo you wish to check for another number (y/n):\t";
    	       cin>>ch;
         }while(ch=='y' || ch=='Y');
  	cout<<"\n\n*******End of program********"<<endl;
	return 0;
}

void sumprime(int i,int j,int num){
	int k,c1=0,c2=0;
	for(k=2;k<=i/2;k++){
		if(i%k==0){
			c1=1;
			break;
		}
	}
	for(k=2;k<=j/2;k++){
		if(j%k==0){
			c2=1;
			break;
		}
	}
	if(c1!=1 && c2!=1){
		cout<<num<<"="
		    <<i<<"+"
		    <<j<<endl;
	}
}

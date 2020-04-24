#include<iostream>
#define MAX 10
using namespace std;
int main()
{ 
	int arr[MAX],n,i;
	char ch='a';
	do
	{
	    system("cls");
		cout<<"Enter the number of elements in the array:"<<endl;
	    cin>>n;
    	if(n<=MAX || n>=0)
    	{
    		cout<<"\n Enter elements in the array:"<<endl;
    		for(i=0;i<n;i++)
    		{
    			cin>>arr[i];
    		}
    		cout<<"\n The elements you entered are:"<<endl;
    		for(i=0;i<n;i++)
    		{
    			cout<<arr[i]<<endl;
    		}
    	}
    	else
    	{
    		cout<<"\n Invalid value of n"<<endl;
    	}
    	cout<<"Do you wish to repeat the process once again(y/n):"<<endl;
    	cin>>ch;
    }while(ch=='y' || ch=='Y');
    cout<<"*****End of program*****"<<endl;
    return 0;
}

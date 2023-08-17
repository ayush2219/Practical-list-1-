//write a c++ program to find compund interest.
#include<iostream>
using namespace std;

int main()
{
	float p,r,t,temp;
	
	cout<<"enter the principal :: ";
	cin>>p;
	
	cout<<"enter the interest rate :: ";
	cin>>r;
	
	cout<<"enter the time period :: ";
	cin>>t;
	
	temp=p*(1+r/100)*t-p;
	cout<<"the compound interest of the following amount is :: "<<temp<<endl;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}

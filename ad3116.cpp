//write a c++ program to check armstrong number using fuction.
#include <iostream>  
using namespace std;  
int main()  
{  
	int number,r,sum=0,temp;    
	cout<<"Enter the Number :: ";    
	cin>>number;    
	temp=number;    
	while(number>0)    
	{    
		r=number%10;    
		sum=sum+(r*r*r);    
		number=number/10;    
	}    
	if(temp==sum)
	{
		cout<<"This number is armstrong number"<<endl;    
	}
	else    
	{
		cout<<"this number is not armstrong number...."<<endl;   
	}
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;  
} 

//write a c++ program to check whether a number is prime or not using function
#include <iostream>  
using namespace std;  
int main()  
{  
  	int number,i,division=0,ad=0;  
  	cout<<"enter the number to check number is prime or not prime ::";  
  	cin>>number;  
  	division=number/2;  
  	for(i=2;i<=division;i++)  
  	{  
      	if(number%i==0)  
    	{  
        	cout<<"number is not prime...."<<endl;  
    	    ad=1;  
 	        break;  
      	}  
  	}  
  	if(ad==0)  
  	{
      	cout<<"number is Prime...."<<endl;  
	}
  	return 0;
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";  
}  

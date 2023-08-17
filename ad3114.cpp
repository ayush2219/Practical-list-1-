//write a c++ program to check whether a number is a Palindrome or not Palindrome.
#include <iostream>  
using namespace std;  
int main()  
{  
  	int number,r,sum=0,temp;    
  	cout<<"Enter the number=";    
  	cin>>number;    
 	temp=number;    
 	while(number>0)    
	{    
 		r=number%10;    
 		sum=(sum*10)+r;    
 		number=number/10;    
	}    
	if(temp==sum)    
	{
		cout<<"Number is Palindrome."<<endl;    
	}
	else
	{   
		cout<<"Number is not Palindrome."<<endl;   
	}
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
  	return 0;  
}  

//Write C++ program to find factorial of the given number with the use of function.
#include <iostream>  
using namespace std;  
int main()  
{  
   	int i,factorial=1,number;    
   	
  	cout<<"Enter a Number to find factorial :: ";    
 	cin>>number;    
 	
  	for(i=1;i<=number;i++)
  	{    
    	factorial=factorial*i;    
  	}
	      
  	cout<<"Factorial is :: "<<factorial<<endl;  
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;  
}  

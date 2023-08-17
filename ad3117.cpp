//write a c++ rpogram to for fibonacci number using function.
#include <iostream>  
using namespace std;  
int main() 
{  
  	int number1=0,number2=1,number3,i,number;    
 	cout<<"Enter the number of elements: ";    
 	cin>>number;    
 	
 	cout<<number1<<" "<<number2<<" ";   
 	
 	for(i=2;i<number;i++)   
 	{    
  		number3=number1+number2;    
  		cout<<number3<<" "<<endl;    
  		number1=number2;    
  		number2=number3;    
 	}
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";    
   	return 0;  
}  

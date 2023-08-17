//write a c++ program to find Largest Among 3 Numbers.
#include<iostream>
using namespace std;
int main()
{
	int number1,number2,number3;
		
	cout<<"Enter number 1 :: ";
	cin>>number1;
		
	cout<<"Enter number 2 :: ";
	cin>>number2;
		
	cout<<"Enter number 3 :: ";
	cin>>number3;
		
	if(number1>=number2 && number2>=number3)
	{
		cout<<"Large number is :: "<<number1<<endl;
	}
	else if(number2>=number1 && number1>=number3)
	{
		cout<<"Large number is :: "<<number2<<endl;
	}
	else
	{
		cout<<"Large numbers is :: "<<number3<<endl;
	}

	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";		
		return 0;
}

//write a c++ program to print Multiplication Table of a number.
#include<iostream>
using namespace std;
int main()
{
	int number,i;
		
	cout <<"Enter the number to find Multiplication Table :: ";
	cin>>number;
		
	for(i=1;i<=10;i++)
	{
			cout<< number << " * " << i << " = "<< number*i<<endl;
	}

	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";		
		return 0;
}

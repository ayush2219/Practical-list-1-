//write a c++ program to calsulate sum of first n natural numbers using function.
#include<iostream>
using namespace std;
int sum(int number)
{
	int add=0 , i;
		
	for(i=1;i<=number;i++)
	{
		add+=i;
	}
	return add;
}

int main()
{
	int range,result;
		
	cout<<"Enter the range :: ";
	cin>>range;
		
	result=sum(range);
		
	cout<<"sum :: "<<result<<endl;
		
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}


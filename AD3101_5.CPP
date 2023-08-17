/*(1) write a 5 prograns using cin and cin and count.
   (V) write a c program to input elements in array and print all negative element*/
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;

	cout<<"Enter the size of array :: ";
	cin>>n;

	cout<<"Enter element in array   :: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"negative element are    :: "<<endl;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			cout<<arr[i]<<endl;
		}
	}
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	return 0;
}

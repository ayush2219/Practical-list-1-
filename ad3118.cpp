//write a c++ program to calculate the power of a number using function.
#include <iostream>
using namespace std;
int main()
{
    int base,expoment,i,result=1;
    cout<<"Enter base :: ";
    cin>>base;
    cout<<"Enter Expoment :: ";
    cin>>expoment;
    for(i=0;i<expoment;i++)
	{
        result=result*base;
    }
      
    cout<<base<<" ^ "<<expoment<<" = "<<result;
    
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai";
    cout<<"Enrollment no :: 220130318022"<<endl; 
    return 0;
}

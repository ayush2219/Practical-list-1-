//write a c++ program To Find a Character is Vowel or Consonant using function.
#include<iostream>
using namespace std;

void check(char);

int main()
{
	char c;
	
	cout<<"Enter any Character To check Character is Vowel Or Consonant :: ";
	cin>>c;
	
	check(c);
	
	cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
	
	return 0;
}
void check(char ch)
{
	cout<<"Entered charctar is :: "<<ch<<endl;
		
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"The charctar is vowel "<<endl;
	}
	else
	{
		cout<<"The charctar is consonant"<<endl;
	}
}

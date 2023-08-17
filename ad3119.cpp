//Write C++ Program to Make a Simple Calculator with the use of switch case.
# include <iostream>
using namespace std;
int main() 
{
	char op;
  	float number1, number2;

  	cout<<"Enter operator: +, -, *, / :: ";
  	cin>>op;

  	cout<<"Enter two operands :: ">>endl;
  	cin>>number1>>number2;

  	switch(op) 
	{

    	case '+':
      		cout<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
      		break;

    	case '-':
      		cout<<number1<<" - "<<number2<<" = "<<number1-number2<<endl;
      		break;

    	case '*':
      		cout<<number1<<" * "<<number2<<" = "<<number1*number2<<endl;
      		break;

    	case '/':
      		cout<<number1<<" / "<<number2<<" = "<<number1/number2<<endl;
    	break;

    	default:
     		cout<<"operator is not correct"<<endl;
      		break;
    cout<<"Student Name  :: Dholariya Ayush Prafulbhai"<<endl;
    cout<<"Enrollment no :: 220130318022";
  }

  return 0;
}


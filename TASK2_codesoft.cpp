#include <iostream>
using namespace std;

/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

main()
{
	int exit=1;
	while(exit!=0)
	{
	cout<<endl<<"****************************************************************************"<<endl ;
	cout<<"*********************** C A L C U L A T O R [+ - * /] **********************" << endl;
	cout<<"****************************************************************************" << endl;
	float num1, num2;
	char op;
	cout<<"\nEnter 1st number : ";
	cin>>num1;
	cout<<"\nEnter 2nd number : ";
	cin>>num2;
incorrect:
	cout<<"\nEnter operand : ";
	cin>>op;
	if(op=='+')
	{
		cout<<endl<< num1+num2 <<endl;
	}
	else if(op=='-')
	{
		cout<<endl<<num1-num2<<endl;
	}
	else if(op=='*')
	{
		cout<<endl<<num1*num2<<endl;
	}
	else if(op=='/')
	{
		cout<<endl<<num1/num2<<endl;
	}
	else
	{
		cout<<"ERROR! ENTER CORRECT OPERAND"<<endl;
		goto incorrect;
	}
	while(exit!=0 || exit!=1)
	{
		cout<<"\nTo exit the program enter 0, to contnue calculating enter 1: ";
		cin>>exit;
		if(exit==0 || exit==1)
		{
			break;
		}
	}
}
}
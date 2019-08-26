#include<iostream>
using namespace std;

class Calculator
{
public:
	double num1,num2;
	char o;

	Calculator()
	{
		num1=0;
		num2=0;
		o='\0';
	}


	void getData();
	void operation();

};

void Calculator::getData()
{
	cout<<"ENTER-- NUM1...OPERATOR...NUM2"<<endl;
	cin>>num1>>o>>num2;
}

void Calculator::operation()
{
	switch(o)
	{
	case '+':cout<<"ADDITION = "<<num1+num2<<endl;
		break;

	case '-':cout<<"SUBTRACTION = "<<num1-num2<<endl;
		break;

	case '*':cout<<"MULTIPICATION = "<<num1*num2<<endl;
		break;

	case '/':cout<<"DIVISION = "<<num1/num2<<endl;
		break;

	default:cout<<"INVALID OPERATOR"<<endl;
	}
}



int main()
{
	Calculator obj;

	char ans='\0';

	do
	{
		obj.getData();
	 	obj.operation();

	 	cout<<"DO YOU WISH TO CONTUNUE ANOTHER OPERATION?..."<<endl;
	 	cin>>ans;

	}	while(ans=='y'||ans=='Y');



	return 0;
}

#include<iostream>
using namespace std;

class Stack
{
private:
	int a[100];
	int top;
	double n1,n2;
	double res;
	char o;

public:
	Stack()
	{
		top=-1;
		n1=0;
		n2=0;
		res=0;
		o= '\0';
	}

	void push(int x);
	int pop();
	void postfix(string exp);
	void operation();
	void print();
};

void Stack::push(int x)
{
	top++;
	a[top]=x;
}

int Stack::pop()
{
	return(a[top--]);
}

void Stack::postfix(string exp)
{
	for(int i=0; i<exp.size(); i++)
	{
		if(exp[i]==' '||exp[i]=='  ') continue;

		else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
		{

			n1=pop();
			n2=pop();
			o=exp[i];
			operation();
			res-=96;
			push(res);

		}

		else
		{

			push(exp[i]);
		}
	}
}

void Stack::operation()
{
	res=0;
	switch(o)
	{
	case '+':
		res+=n1+n2;
		break;

	case '-':
		res+=n1-n2;
		break;

	case '*':
		res+=n1*n2;
		break;

	case '/':
		res+=n1/n2;
		break;
	}
}

void Stack::print()
{
	cout<<"RESULT OF GIVEN POSTFIX: "<<res+96<<endl;
}

int main()
{
	Stack obj;
	string exp;

	cout<<"ENTER POSTFIX: "<<endl;
	cin>>exp;

	obj.postfix(exp);
	obj.print();

	return 0;
}

#include<iostream>
using namespace std;

class CppArray
{
public:
	int a[50],n,temp;

	CppArray()
	{
		n=0;
		temp=0;
	}

	void getInput();
	void displayOutput();
	void sorting();
	void range();
	int size();
};

void CppArray::getInput()
{
	cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		cout<<endl;
	}

}

void CppArray::displayOutput()
{
	cout<<"ENTERED ELEMENTS IN ARRAY ARE :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<endl;
	}
}

void CppArray::sorting()
{
	for(int k=0;k<n-1;k++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}

	cout<<"SORTED ARRAY IS:"<<endl;
	for(int i=0;i<n;i++)
		{
			cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
}

void CppArray::range()
{
	cout<<"THE RANGE OF ARRAY IS FROM "<<a[0]<<" TO "<<a[n-1]<<endl;
}

int CppArray::size()
{
	return n;
}

int main()
{
	CppArray obj;
	obj.getInput();
	obj.displayOutput();
	obj.sorting();
	obj.range();
	int size=obj.size();
	cout<<"SIZE OF ARRAY IS "<<size<<endl;
	return 1;
}

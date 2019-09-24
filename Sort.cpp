#include<iostream>
using namespace std;

class  Op
{
public:
	int a[100];
	int n;

	Op()
	{
		n=0;		
	}
	
				
	void elements();
	void bubbleSort();
	void display();	

};

void Op::elements()
{	
	cout<<"ENTER NO OF ELEMENTS"<<endl;
	cin>>n;

	cout<<"ENTER ELEMENTS IN THE ARRAY"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
}

void Op::bubbleSort()
{

	for(int pass=1; pass<=n-1; pass++)
	{
		for(int i=0; i<n-pass; i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}

}

void Op::display()
{
	cout<<"SORTED ELMENTS IN THE ARRAY ARE: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}


int main()
{
	Op o;
	o.elements();
	o.bubbleSort();
	o.display();	

	return 0;
}

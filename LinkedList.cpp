#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	string name;
	Node* next;
};

class Link
{
public:
	Node* head;

	Link()
	{
		head=NULL;
	}

	void insertAtEnd(int a,string a1);
	void insertAtFirst(int b,string b1);
	void insertInMiddle(int c,int n,string c1);
	void removeNode(int d);
	int count();
	void elementAtIndex(int e);
	void reverse();
	void display();

};

void Link::insertAtEnd(int a,string a1)
{
	Node* temp=new Node;
	temp->data=a;
	temp->name=a1;
	temp->next=NULL;

	if(head==NULL)
	{
		head=temp;
	}

	else
	{
		Node* current;
		current=head;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=temp;
	}

}

void Link::insertAtFirst(int b,string b1)
{
	Node* temp=new Node;
	temp->data=b;
	temp->name=b1;
	temp->next=head;
	head=temp;
}

void Link::insertInMiddle(int c,int n,string c1)
{
	Node* temp=new Node;
	temp->data=c;
	temp->name=c1;
	Node* current;
	current=head;

	for(int i=0; i<n; i++)
	{
		current=current->next;
	}

	temp->next=current->next;
	current->next=temp;



}


void Link::display()
{
	Node* current;
	current=head;

	while(current!=NULL)
	{
		cout<<current->data<<" "<<current->name<<endl;
		current=current->next;

	}
}

void Link::elementAtIndex(int e)
{
	Node* current;
	current=head;

	for(int i=0; i<e; i++)
	{
		current=current->next;
	}

	cout<<current->data<<" "<<current->name<<endl;

}

void Link::removeNode(int d)
{
	Node* current;
	current=head;

	for(int i=0; i<(d+1); i++)
	{
		current=current->next;
	}

	Node* past;
	past=head;

	for(int i=0; i<d-1; i++)
	{
		past=past->next;
	}

	past->next=current->next;

}

int Link::count()
{
	int count=0;

	Node* current;
	current=head;
	while(current->next!=NULL)
	{
		count++;
		current=current->next;

	}

	return count;
}

void Link::reverse()
{
	Node* current;
	current=head;

	while(current->next!=NULL)
	{
		current=current->next;
	}



}


int main()
{
	Link l1;
	l1.insertAtEnd(1,"Atharva");
	l1.insertAtEnd(2,"Harsh");
	l1.insertAtEnd(3,"Hrushi");

	l1.insertAtFirst(0,"Panda");

	l1.insertInMiddle(10,2,"Euuu");

	l1.display();

	cout<<"********************"<<endl;

	l1.removeNode(2);

	l1.display();
	l1.elementAtIndex(2);

	int count=l1.count()+1;
	cout<<count<<endl;

	return 0;
}

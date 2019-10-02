#include<iostream>
using namespace std;

void createNode();
void Display();
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL,*tail=NULL,*newnode,*temp;
int main()
{
	
	int choice;
	cout<<"Doubly Linked List"<<endl;
	do
	{
	cout<<"Enter Your choice"<<endl;
	cout<<"1 Create Node"<<endl;
	cout<<"2 Display Element"<<endl;
	cout<<"3 Insert At Begining"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			    createNode();
			    break;
		case 2:
			    Display();
			    break;
		case 3:
			    InsertAtBeg();
			    break;		    
		default:
				cout<<"wrong choice";	    
	}
	 
	
    }while(choice!=0);
}
void createNode()
{
		
    create
	if(head==NULL)
	{
		head=tail=newnode;	
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
		newnode->next=NULL;
	}
	
		
}
void Display()
{
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	else
	{
	temp=head;
	cout<<"Node Elements"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl<<endl;
}
}
void InsertAtBeg()
{
	
}

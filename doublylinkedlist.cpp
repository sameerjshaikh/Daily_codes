#include<iostream>
using namespace std;
void accNodeData();
void createNode();
void Display();
void InsertAtBeg();
void InsertAtEnd();
void InsertAfterpos();


struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL,*tail=NULL,*newnode,*temp=NULL;
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
	cout<<"4 Insert At End"<<endl;
	cout<<"5 Insert After Specific Element"<<endl;
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
		case 4:
			    InsertAtEnd();
			    break;
		case 5:
			    InsertAfterpos();
			    break;						    
		default:
				cout<<"wrong choice";	    
	}
	 
	
    }while(choice!=0);
}
void accNodeData()
{
		newnode= new node();
		cout<<"Enter Node Element";
		cin>>newnode->data;
		newnode->next=NULL;
		newnode->prev=NULL;
}
void createNode()
{
    accNodeData();
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
	accNodeData();
	if(head==NULL)
	{
		head=tail=newnode;	
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	cout<<"Node added at Begining";
}
void InsertAtEnd()
{
	accNodeData();
	if(head==NULL)
	{
		head=tail=newnode;	
	}
	else
	{
		newnode->prev=tail;
		tail->next=newnode;
		tail=newnode;
	}
	
}
void InsertAfterpos()
{
	int data;
	cout<<"Enter Element to add after new Node";
	cin>>data;
	accNodeData();
	
	temp=head;
	if(temp->data!=data)
	{
		temp=temp->next;
	}
	//temp=temp->next;
	newnode->next=temp->next;
	temp->next->prev=temp;
	temp->next=newnode;
	temp=newnode;
	
}

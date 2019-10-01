#include<iostream>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
	
};

int main()
{
	struct node *head,*newnode, *temp;
	head=0; 
	int choice=1;
	
	while(choice)
	{
		newnode =(struct node*) malloc(sizeof(struct node));
		cout<<"Enter node data"<<endl;
		cin>>newnode->data;
		
		newnode->next=0;
		
	if(head==0)
	{
		head= temp=newnode;	
	}
	else 
	{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"press 1 for add more Node element."<<endl;
	cin>>choice;	
	}
	
	temp=head;
	
	while(temp!=0)
	{
		cout<<temp->data<<endl;
		
		temp=temp->next;
	}
	
	return 0;
	
	
}

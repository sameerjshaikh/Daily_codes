#include<iostream>
using namespace std;
void accNodeData();
void createNode();
void Display();
void InsertAtBeg();
void InsertAtEnd();
void InsertAfterpos();
void DeleteAtBeg();
void DeleteAtEnd();
void DeleteSpecNod();

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
	cout<<"6 Delete Begining Node"<<endl;
	cout<<"7 Delete END Node"<<endl;
	cout<<"8 Delete Specific Node"<<endl;
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
		case 6: 
		        DeleteAtBeg();
		      	break;	
	  case 7: 
		        DeleteAtEnd();
				break;	
      case 8: 
		        DeleteSpecNod();
				break;				    	    
		default:
				cout<<"wrong choice";	    
	}
	 
	
    }while(choice!=0);
}
void accNodeData()
{
		newnode= new node;
		cout<<"Enter Node Element"<<endl;
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
		cout<<"List is empty"<<endl;
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
	cout<<"Node added at Begining"<<endl;
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
	cout<<"Enter Element to add after new Node"<<endl;
	cin>>data;
	accNodeData();
	
	temp=head;
	while(temp->data!=data)
	{
		temp=temp->next;
	}
	//temp=temp->next;
	newnode->next=temp->next;
	temp->next->prev=newnode;
	newnode->prev=temp;
	temp->next=newnode;
	
	
}
void DeleteAtBeg()
{
	temp=head;
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;	
	}
	else{
	
	head=temp->next;
	head->prev=NULL;
	delete(temp);
	cout<<"First Node Deleted"<<endl;
   }
}

void DeleteAtEnd()
{

	if(head==NULL)
	{
		cout<<"List is empty"<<endl;	
	}
else{
	    temp=tail;
		tail=temp->prev;
		tail->next=NULL;
	    delete(temp);
	cout<<"Last Node Deleted"<<endl;
   }
}             
void DeleteSpecNod()
{
		int data;
	cout<<"Enter data to want delete"<<endl;
	cin>>data;
	
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;	
	}
	else
	{
		temp=head;
		while(temp->data!=data)
		{
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		delete(temp);	
		
		cout<<"NODE DELETED"<<endl<<endl<<endl;
	}	
}         

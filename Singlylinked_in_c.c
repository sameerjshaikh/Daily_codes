#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *newnode, *temp; 
void createNode();
void show();
void InsertAtBegin();
void inserAtlast();
void DeleteAtBeg();
void deleteAtEnd();
void main()
{
	int choice=0;
	while(choice!=9)
	{
	printf("\nEnter Your Choice\n");
	printf("1.Insert Node\n2.Display\n3.insertAtbegin\n4.insertAtlast\n5.DelAtBeg");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			createNode();
			break;
		case 2:
			show();
			break;
		case 3:
			InsertAtBegin();
			break;
		case 4:
			inserAtlast();
			break;
		case 5:
			DeleteAtBeg();
			break;
		case 6:
			deleteAtEnd();
			break;				
		default:
			printf("Enter A valid Choice");	
	}
	}
	
}
void createNode()
{
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}

}
void show()
{
	struct node *temp1=head;
	printf("\n Node Element\n");
	while(temp1!=NULL)
	{
	printf("|%d-%d|",temp1->data ,temp1->next);
	temp1=temp1->next;
	}
}
void InsertAtBegin()
{
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for First Node\n");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void inserAtlast()
{
	int item;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data for Last Node\n");
	scanf("%d",&item);
	newnode->data=item;
	newnode->next=NULL;
	
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
}
void DeleteAtBeg()
{
	struct node *temp1;
	if(head==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		temp1=head;
		head=head->next;
		free(temp1);
		printf("Begining Node is Deleted");
	}
}
void deleteAtEnd()
{
struct node *prev, *temp1;
	while(temp1->next!=NULL)
	{
		prev=temp1;
		temp1=temp1->next;
	}
	if(temp1==head)
	{
		head==NULL;
		free(temp1);
	}
	else
	{
		prev->next=NULL;
	}
	
}

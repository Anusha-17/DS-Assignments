#include<stdio.h>
#include<stdlib.h>
void insert(int);
void deletefirst();
void display();

struct node
{
	int data;
	struct node *next;
};

struct node *head;

void main()
{
	int choice,item;
	do
	{
		printf("\n1.Insert\n2.Delete node\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter the item:");
			        scanf("%d",&item);
			        insert(item);
			        break;
		    case 2: deletefirst();
		            break;
		    case 3:display();
			       break;        
		    case 4: exit(0);
		            break;
		    default:printf("Invalid choice");

		}
}while(choice!=4);
}

void insert(int item)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node*));
	struct node *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty");
	}
	else
	{
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
		}
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}		
		temp->next=ptr;
		ptr->next=NULL;
		printf("Node is inserted\n");
	}
}

void deletefirst()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);
		printf("Node is deleted\n");
	}
}

void display()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("Data=%d\t\n",temp->data);
			temp=temp->next;
		}
	}
}


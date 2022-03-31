#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head=NULL,*tail=NULL;

void insert(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	if(head==NULL)
	{
		head=tail=newnode;
		head->prev=NULL;
		tail->next=NULL;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
		tail->next=NULL;
	}
}
void display()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("List is empty");
		return;
	}
	printf("Nodes of Double linked list:\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	display();
	return 0;
}

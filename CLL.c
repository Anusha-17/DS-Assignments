#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
void insert(int data)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
		newnode->next=head;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
	}
}
void display()
{
	struct node *current=head;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		printf("Nodes of circular linked list:\n");
		do
		{
			printf("%d\n",current->data);
			current=current->next;
		}while(current!=head);
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	display();
	return 0;
}

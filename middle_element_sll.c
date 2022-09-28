#include<stdio.h>
#include<stdlib.h>
struct sll{
	int data;
	struct sll *link;
};
struct sll* add(struct sll *ptr)
{
	struct sll *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct sll));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
	return ptr;
}
void display(struct sll *ptr)
{
	struct sll *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
void middle_element(struct sll *ptr)
{
	struct sll *slow=NULL,*fast=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else if(ptr->link==NULL)
	{
		printf("list is having only one node\n");
	}
	else
	{
		slow=fast=ptr;
		while(fast!=NULL && fast->link!=NULL)
		{
			//slow=slow->link;
			fast=fast->link->link;
			slow=slow->link;
		}
		printf("middle elements=%d\n",slow->data);
	}
}
int main()
{
	struct sll *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add\t2.display\t3.middle_element\t4.ext\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:display(head);
			       break;
			case 3:middle_element(head);
			       break;
			case 4:exit(0);
		}
	}
}

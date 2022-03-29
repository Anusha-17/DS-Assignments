#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int roll;
	struct Student *link;
};
struct Student *Add_first(struct Student *ptr)
{
	struct Student *newnode=NULL;
	newnode=malloc(sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the roll\n");												
		scanf("%d",&newnode->roll);
		newnode->link=ptr;
		ptr=newnode; 
	}
	return ptr;
}
void Display(struct Student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->roll);
			ptr=ptr->link;
		}
	}
}
void odd_values(struct Student *ptr)
{
	struct Student *temp;
	int cnt=0;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	temp=ptr;
	while(temp!=NULL)
	{
		cnt++;
		if((temp->roll)%2!=0)
		{
			printf("position=%d\todd numbers=%d\n",cnt,temp->roll);
		}
		temp=temp->link;
	}
}
int main()
{
	struct Student *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Add_first 2. Display 3.exit 4.odd_values\n");
		printf("enter ur choice :");						
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_first(head);
				break;
			case 2: Display(head);
				break;
			case 3:exit(0);
			case 4:odd_values(head);
			       break;
		}
	}
}

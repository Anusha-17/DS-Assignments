#include<stdio.h>
#include<stdlib.h>

struct stu *createnode();
void traversal();


struct stu{
	char c;
	struct stu *next;
}*head;

int main()
{
	struct stu *new=0,*temp=0;
	head=0;
	char ch='y';
	while(ch=='y')
	{
		new=createnode();
		if(head==NULL)
		{
			head=temp=new;
		}
		else
		{
			temp->next=new;
			temp=new;
		}
		temp->next=head;
		printf("Do you want continue: ");
		scanf("\n%c",&ch);
	}
	traversal(head);
	return 0;
}


struct stu *createnode()
{
	struct stu *new;
	new=(struct stu *)malloc(sizeof(struct stu));
	printf("Enter data: ");
	scanf("\n%c",&new->c);
	new->next=0;
	return new;
}


void traversal()
{
	struct stu *temp=0;
	temp=head;
	while((temp->next)!=head)
	{
		printf("%c\t",temp->c);
		temp=temp->next;
	}
	printf("%c",temp->c);
	printf("\n");
}

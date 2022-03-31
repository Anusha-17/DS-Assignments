#include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
    int data;
    struct stu *link; 
}node;

node *head=NULL;
node *head1=NULL;

void circularlinkedlist();
void Display();
void Circular_or_not();
void singlelinkedlist();

int main()
{
    int x,n;
    while(1)
    {
        printf("\n1.Circular linked list\n2.Display\n3.check circular or not\n4.Single linked nlist\n0.exit\n");
        printf("Enter your choice:");
        scanf("%d",&x);
        switch(x)
        {
            case 1: circularlinkedlist();
                    break;
            case 2: Display();
                    break;
            case 3:Circular_or_not();
                    break;
            case 4:singlelinkedlist();
                    break;
            default:exit(1);
        }
    }
    return 0;
}
void circularlinkedlist()
{
    node *new,*temp=NULL;
    int i,len;
    printf("Enter the length of the linked list: \n");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        new=(node *)malloc(sizeof(node));
        printf("Enter elements in a list: ");
        scanf("%d",&new->data);
        new->link=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }
        temp->link=head;   
    }     
}
void singlelinkedlist()
{
    node *new,*temp=NULL;
    int i,len;
    printf("Enter the length of the linked list: \n");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        new=(node *)malloc(sizeof(node));
        printf("Enter elements in a list: ");
        scanf("%d",&new->data);
        new->link=NULL;
        if(head1==NULL)
        {
            head1=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }     
    }   
}
void Display()
{
    node *ptr=NULL,*ptr1=NULL;
    ptr=head;
    ptr1=head1;
    int c=1;
    if(ptr==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while((ptr->link)!=head)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->link;
            c++;
        }
        printf("%d\n",ptr->data);
    }
    printf("number of nodes =%d\n",c);
     c=1;
     if(ptr1==NULL)
    {
        printf("Sll is List is empty\n");
    }
    else
    {
        while((ptr1->link)!=NULL)
        {
            printf("%d\t",ptr1->data);
            ptr1=ptr1->link;
            c++;
        }
        printf("%d\n",ptr1->data);
    }
    printf("number of nodes =%d\n",c);
}
void Circular_or_not()
{
    if(head==NULL)
    {
        printf("Circular list is empty\n");
   }
    else
    {
        node *temp_node=head;
        while(temp_node->link!=head)
        {
            printf("%d\t",temp_node->data);
            temp_node=temp_node->link;
        }
        printf("%d\n",temp_node->data);
	    if((temp_node)->link==(head))
	    {
		    printf("List is a Circular single list\n");
	    }
	    else
	    {
		    printf("List is not a Circular single list\n");
	    }
    }
     if(head1==NULL)
    {
        printf("SLL list is empty\n");
    }
    else
    {
        node *temp_node=head1;
        while(temp_node->link!=NULL)
        {
            printf("%d\t",temp_node->data);
            temp_node=temp_node->link;
        }
        printf("%d\n",temp_node->data);
	    if((temp_node)->link==(head1))
	    {
		    printf("List is a Circular single list\n");
	    }
	    else
	    {
		    printf("List is not a Circular single list\n");
	    }
    }
}

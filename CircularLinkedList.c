#include <stdio.h>
#include <stdlib.h>
typedef struct stu
{
    int data;
    struct stu *link; 
}node;
node *head=NULL;
void create_circularnode();
void Display();
int main()
{
    int x,n;
    while(1)
    {
        printf("\n1.Create circularlinked list\n2.Display\n0.exit\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: create_circularnode();
                    break;
            case 2: Display();
                    break;
            default:exit(1);
        }
    }
    
    return 0;
}
void create_circularnode()
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
    if(head==head)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
}

void Display()
{
    node *ptr=NULL;
    ptr=head;
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
        }
        printf("%d\n",ptr->data);
    }
}

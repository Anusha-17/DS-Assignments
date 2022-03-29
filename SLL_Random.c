#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
void insert();
void randominsert(); 
void display();  
void main()  
{ 
 insert();
 insert();
 insert();
 display();
 randominsert();
 display();
}
void insert()  
{  
    struct node *temp=NULL;  
    int item;  
    temp = (struct node *) malloc(sizeof(struct node *));  
    if(temp == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        temp->data = item;  
        temp->next = head;  
        head = temp; 
        printf("\nNode inserted"); 
    }  
      
}  
void randominsert()  
{  
    int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nMemory is full");  
    }  
    else  
    {  
        printf("\nEnter element value");   
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted");  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("%d ",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}    

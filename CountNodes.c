#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>      
struct node
{  
    int data;  
    struct node *next; 
};  
   
int count = 0;  
struct node *head=NULL;  
struct node *tail=NULL;  
void add(int data)
{  
    struct node *newNode=(struct node*)malloc(sizeof(struct node));  
    newNode->data=data;  
    if(head == NULL)
	{  
        head=newNode;  
        tail=newNode;  
        newNode->next=head;  
    }
	else 
	{   
        tail->next=newNode;  
        tail=newNode;  
        tail->next=head;  
    }  
}  
void countNodes() 
{  
    struct node *current=head;  
    do
	{  
        count++;  
        current=current->next;  
    }while(current != head);  
    printf("Count of nodes present in circular linked list: %d",count);  
}  
      
int main()  
{  
    add(1);  
    add(2);  
    add(4);  
    add(1);  
    add(2);  
    add(3);  
   countNodes();     
   return 0;  
}  

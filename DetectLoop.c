#include<stdio.h>
#include<stdlib.h> 
struct node
 {
  int data;
  struct node *next;
 };
struct node *head=NULL; 

void insert(int num)
 {
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=num;
    newNode->next=head;
    head=newNode;
    printf("Inserted Element : %d\n",num);
}
 
void detectloop(struct node *head)
 {
    struct node *slow,*fast;
    slow=fast=head;
    while(slow && fast && fast->next)
	 {
        slow=slow->next;
        fast=fast->next->next;
        if (slow == fast) 
		{
           printf("Linked List contains a loop\n");
           return;
        }
    }
    printf("No Loop in Linked List\n");
}
void display(struct node *nodePtr)
 {
  while(nodePtr != NULL) 
  {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() 
{
    insert(8);  
    insert(3); 
    insert(2); 
    insert(7);
    insert(9);
    head->next->next->next->next->next = head->next;
    detectloop(head);
    return 0;
}

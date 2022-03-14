#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
// This function prints contents of linked list starting from the given node
void printList(struct Node* n)
{
    while (n != NULL)
	 {
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 100; // assigning data to first node
    head->next = second; // Link first node with second
 
    second->data = 200; // assigning data to second node
    second->next = third;
 
    third->data = 300; // assigning data to third node
    third->next = NULL;
 
    printList(head);
 
    return 0;
}

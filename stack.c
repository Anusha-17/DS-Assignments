#include<stdio.h>
#define s 5  //size declaration
int stack[s];//declaration of stack with size
int top=-1;//top of stack
void push(int ele)
{                  // 0 1  2    top=s-1(3)
	if(top==s-1)//4(stack is full)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
	top++;    //top=0+   top=1   top=2  
	stack[top]=ele;// 1     2     3
	}
}
void pop()
{
	if(top==-1)
	{	
		printf("stack is empty\n");
		return;
	}
	else
	{
	printf("poped elements are: %d\n",stack[top]);//3  stack[2] stack[1]=2
	top--;
	}
}
void display()
{
	if(top== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)//0->1;1->2;2->
	printf("%d\n",stack[i]);//stack[0]=1,2,3
}
int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}

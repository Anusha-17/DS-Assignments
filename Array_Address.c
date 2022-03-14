#include<stdio.h>
void main()
{
	int arr[5]={11,22,33,44,55};
	int i;
	for(i=0;i<5;i++)
	   printf("%d\t",arr[i]); 
	   printf("\n");
	   printf("Address of Array:\n");
	   for(i=0;i<5;i++)
	   printf("Address of arr[%d] is = %p\n",i,&arr[i]);
}

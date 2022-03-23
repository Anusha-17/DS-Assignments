#include<stdio.h>
int a[20],n;
void bubblesort()
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
}
void main()
{
	int i;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubblesort();
	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

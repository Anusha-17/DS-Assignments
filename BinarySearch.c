#include<stdio.h>
void main()
{
	int num[25],n,data,i,flag=0,low,high,mid;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	printf("Enter the element to be searched:");
	scanf("%d",&data);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(num[mid]==data)
		{
			flag=1;
			break;
		}
		else if(data<num[mid])
		high=mid-1;
		else
		low=mid-1;
	}
	if(flag==1)
	printf("Data found at location : %d",mid+1);
	else
	printf("Data not found");
}

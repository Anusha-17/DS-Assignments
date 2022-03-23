#include <stdio.h>  
void insert(int a[], int n)  
{  
	int i, j, temp;  
	for(i=1;i<n;i++) //i<6
	{  
		temp=a[i];  				        
		j=i-1; 	//j=0			
		while(j>=0 && a[j]>temp)  
		{    
			a[j+1] = a[j];     
			j--;
		}    
		a[j+1] = temp;    
	}  
}  
void display(int a[], int n)   
{  
	int i;  
	for(i=0;i<n;i++) 
		printf("%d ", a[i]);//a[0] a[1] a[2] a[3] a[4] a[5]  
}    
int main()  
{  
	int a[] = {15,20,10,30,50,18};  
	int n = sizeof(a) / sizeof(a[0]);  
	printf("Before sorting array elements are - \n");  
	display(a, n);  
	insert(a, n);  
	printf("\nAfter sorting array elements are - \n");    
	display(a, n);  
	return 0;
}

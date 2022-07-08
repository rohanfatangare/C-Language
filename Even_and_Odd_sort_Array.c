#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,n,j=0,k=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d number for list : ",(i+1));
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	else
	{
		c[k]=a[i];
		k++;
	}
	}
	printf("\nEven numbers are :\n");
	for(i=0;i<j;i++)
	{
		printf(" %d",b[i]);
	}
		printf("\nOdd numbers are :\n");
		for(i=0;i<k;i++)
		{
			printf(" %d",c[i]);
		}
}
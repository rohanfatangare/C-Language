#include<stdio.h>
int main()
{
	int i,j,m,n,a[100],b[100],c[100];
	printf("Enter the size of list 1 : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Enter %d number for list 1 : ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter the size of list 2 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d number for list 2 : ",(i+1));
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<n;j++)
	{
		c[i]=b[j];
		i++;
	}
	printf("Resultant array is : ");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
}
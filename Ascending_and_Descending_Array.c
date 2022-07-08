#include<stdio.h>
main()
{
	int i,n,j,a[100],k;
	printf("Enter the Size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
	printf("\n Ascending order of list is:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])
		{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
	printf("\n Descending order of list is:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
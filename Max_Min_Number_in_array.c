#include<stdio.h>
int main()
{
	int i,n,a[100],max,min;
	printf("Enter the size of list : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}	
	}
	printf("Maximum number is: %d\n",max);
	printf("Minimum number is: %d\n",min);
}
#include<stdio.h>
int main()
{
	int i,arr[10],sum=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter %d number : ",(i+1));
		scanf("%d",&arr[i]);
	}
	sum=0;
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	for(i=0;i<=9;i++)
	{
		printf("Value of %d number is : %d \n",(i+1),arr[i]);
	}
	printf("Sum is : %d\n",sum);
}	
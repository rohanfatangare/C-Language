#include<stdio.h>
main()
{
	int num,count=0,i;
	printf("Enter number for checking prime or not: \n");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	if(num%i==0)
	{
		count++;
	}
	if (count==0)
	{
		printf("The number is prime");
	}
	else 
	{
		printf("The number is not prime");
	}
}
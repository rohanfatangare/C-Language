/*C program to check whether the given number is the Perfect number*/  
#include<stdio.h>
main()
{
	int number,i,div,sum=0;
	printf("Enter the number for checking perfect or not: \n");
	scanf("%d",&number);
	for(i=1;i<number;i++)// find all divisors and add them  
	{
		if(number%i==0)
		sum=sum+i;
	}
	if(sum==number)
	{
		printf("%d is a perfect number",number);
	}
	else
	{
		printf("%d is not a perfect number",number);
	}
}
#include<stdio.h>
main()
{
	int num,num1=1,ans;
	printf("Enter any number");
	scanf("%d",&num);
	printf("Table of Given Number is: \n");
	printf("-------------------------------\n");
	while(num1<=10)
	{
		ans=num*num1;
		printf("\t%d * %d = %d\n",num,num1,(ans*1));
		num1=num1+1;
	}
	printf("-------------------------------");
}
#include<stdio.h>
main()
{
	int number,i,sum=1;
	printf("Enter limit for Series:\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		sum=(i*i);
		printf("%d ",sum);
	}
}
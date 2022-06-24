#include<stdio.h>
main()
{
	int number,i,sum=1;
	printf("Enter limit for Series:\n");
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{
		sum=sum+i;
		printf("%d ",sum);
	}
}
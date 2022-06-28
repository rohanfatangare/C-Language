#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		if (i%2==1)
		{
			printf("%d ",i);
		}
		else
		{
			printf("%d ",j);
		}
	}
}
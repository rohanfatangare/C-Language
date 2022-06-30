#include<stdio.h>
main()
{
	int i,j;
	for(i=7;i>=1;i=i-2)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d ",j);
	}
}
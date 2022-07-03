#include<stdio.h>
main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d",j);
		for(j=i;j<=4;j++)
		printf("  ");
		for(j=i;j>=1;j--)	
		printf("%d",j);
	}
}
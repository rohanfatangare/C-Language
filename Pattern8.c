#include<stdio.h>
main()
{
	int i,j;
	for(i=7;i>=1;i=i-2)
	{
		printf("\n");
		for(j=i;j>=1;j=j-2)
		printf("%d",i);
	}
}
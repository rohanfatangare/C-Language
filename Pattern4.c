#include<stdio.h>
main()
{
	int i,j;
	char k;
	for(i=7;i>=1;i=i-2)
	{
		printf("\n");
		for(j=1,k='A';j<=i;j=j+2,k++)
		printf("%d%c ",j,k);
	}
}
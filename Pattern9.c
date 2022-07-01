#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1,k=1;i<=9;i=i+2,k=k+4)
	{
		printf("\n");
		for(j=i;j<=k;j=j+2)
		printf("%d ",j);
	}
}
#include<stdio.h>
main()
{
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		printf("\n");
		for (j=1;j<=i;j++)
		if(j%2==1)
		printf("%d ",1);
		else
		printf("%d ",0);
	}
}
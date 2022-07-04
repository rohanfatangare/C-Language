#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		if(j%2==1)
		printf("* ",i);
		else
		printf("# ",i);
	}
}
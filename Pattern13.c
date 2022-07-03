#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5,k=10;i>=1,k>=1;i--,k=k-2)
	{
		printf("\n");
		for(j=i;j<k;j++)
		if(j%2==1)
		printf("*",j);
		else
		printf("#",j);

	}
}
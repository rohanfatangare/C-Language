#include<stdio.h>
main()
{
	int i,j;
	// use nested for loop  
 	// outer for loop define the rows and check rows condition
	for(i=7;i>=1;i=i-2)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d ",j);
	}
}

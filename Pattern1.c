#include<stdio.h>
main()
{
	int i,j;
	// use nested for loop  
    // outer for loop define the rows and check rows condition
	for (i=5;i>=1;i--)
	{
		printf("\n");
		for(j=5;j>=i;j--)
		printf("%d ",j);
	}
}
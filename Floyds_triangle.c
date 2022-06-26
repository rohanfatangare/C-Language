#include<stdio.h>
main()
{
	int i,j;
	// use nested for loop  
    // outer for loop define the rows and check rows condition
	for(i=1;i<=5;i++)
	{
		// inner loop check j should be less than equal to 1 and print the data.    
		printf("\n");
		for(j=1;j<=i;j++)
		printf("%d ",j);
	}
}
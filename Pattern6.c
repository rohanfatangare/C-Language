#include<stdio.h>
main()
{
	int i,j;
	for (i=1;i<=9;i=i+2)
	{
		printf("\n");
		for(j=9;j>=i;j=j-2)
			printf("%d ",j);
		
	}    
}
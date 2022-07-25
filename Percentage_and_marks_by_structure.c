#include<stdio.h>
main()
{
	int i,j,marks[5],students[10],sum[10];
	float perc[10];
	for(i=1;i<=2;i++)
	{
		printf("Enter the Marks For student %d:\n",i);
		for(j=1;j<=5;j++)
		{
			printf("Enter the marks of subject %d:\n",j);
			scanf("%d",&marks[j]);
		}
		sum[i]=marks[j]+sum;
		printf("Marks of student %d is: %d",i,sum[i]);
	}
}
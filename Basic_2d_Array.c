#include<stdio.h>
main()
{
	int r,c,i,j,a[10][10],b[10][10];
	printf("Please enter the number of rows in matrix:\n");
	scanf("%d",&r);
	printf("PLease enter the number of coloums in matrix:\n");
	scanf("%d",&c);
	printf("Enter the elements of First matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element %d%d :\n",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of Second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element %d%d :\n",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
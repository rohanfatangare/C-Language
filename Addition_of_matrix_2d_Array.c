#include<stdio.h>
main()
{
	int i,j,r,c,a[10][10],b[10][10],sum[10][10];
	
	printf("\n Enter the number of rows in matrix: ");
	scanf("%d",&r);
	
	printf("\n Enter the number of coloums in matrix: ");
	scanf("%d",&c);
	
	printf(" Enter the matrix of First Element: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Enter the element %d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Enter the matrix of second Element: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Enter the element %d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
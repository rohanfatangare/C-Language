#include<stdio.h>
int array(int m)
{
	int i,a[100];
	for(i=0;i<m;i++)
	{
		printf("Enter %d number : ",(i+1));
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%3d",a[i]);
	}
}
main()
{
	int a[100],m,i;
	printf("Enter the size of array");
	scanf("%d",&m);
	array(m);
}
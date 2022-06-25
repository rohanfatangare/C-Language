#include<stdio.h>
main()
{
	int n,a;
	printf("Enter n Numbers:\n");
	scanf("%d",&n);
	for(a=5;a<=n;a=a+5)
	{
		printf("%d ",a);
	}
}
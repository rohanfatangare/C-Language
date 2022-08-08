#include<stdio.h>
main()
{
	int *a,b=20;
	a=10;
	a=&b;
	printf("%d\n",a);
	printf("%d\n",*a);
	printf("%d\n",b);
	printf("%d\n",&b);
	printf("%d\n",&a);
	
}
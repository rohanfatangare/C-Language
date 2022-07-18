#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
main()
{
	int a,b,d;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	d=add(a,b);
	printf("Addition is : %d",d);
}
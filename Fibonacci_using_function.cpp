#include<stdio.h>
int fibo(int num)
{
	int i,a=0,b=1,c;
	printf("%d %d ",a,b);
	for(i=2;i<num;i++)
		{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		}
}
main()
{
	int num;
	printf("Input any number: ");
	scanf("%d",&num);
	fibo(num);
}
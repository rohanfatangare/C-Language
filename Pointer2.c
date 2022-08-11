#include<stdio.h>
main()
{
	int a=10,b=20,c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*p+a;
	printf("%d\n",c);
	*p=a+b;
	printf("%d\n",a);
	printf("%d\n",*p);
	b=b+3;
	printf("%d\n",*q);
	(*p)++;
	printf("%d\n",*p);
	q++;
	printf("%d\n",*q);
	printf("%d\n",a);
	printf("%d\n",b);
}
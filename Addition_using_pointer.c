#include<stdio.h>
#include<malloc.h>
main()
{
	int *p,*q,*r;
	//int a,b,c;
	//int x,y,z;
//	p=&x;
//	q=&y;
//	r=&z;
	p=malloc(sizeof(int));
	q=malloc(sizeof(int));
	r=malloc(sizeof(int));
	printf("Enter two numbers:\n");
	scanf("%d %d",p,q);
	//c=a+b;
	*r=*p+*q;
	//printf("The addition is:%d\n",c);
	printf("The addition is:%d\n",*r);
}
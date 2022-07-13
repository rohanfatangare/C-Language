#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char a[20];
	printf("Enter Name: ");
	gets(a);
	strrev(a);
	printf("Reverse name is: ");
	puts(a);
}
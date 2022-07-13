#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char a[20],b[20];
	printf("Enter Name:");
	gets(a);
	strcpy(b,a);
	printf("Copied Name is: ");
	puts(b);
}
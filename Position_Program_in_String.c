#include<stdio.h>
main()
{
	char a[20];
	int i,pos,nos;
	printf("Enter a name: ");
	gets(a);
	printf("Enter the position");
	scanf("%d",&pos);
	printf("Enter the number");
	scanf("%d",&nos);
	for(i=pos-1;i<pos+nos;i++)
	{
		printf("%c",a[i]);
	}
}
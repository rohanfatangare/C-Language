#include<stdio.h>
main()
{
	char a[20];
	int i,count=0;
	printf("Enter Your full name:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		count++;
	}
	printf("Number of vovels in Name are %d",count);
}
#include<stdio.h>
main()
{
	char str[40];
	int i;
	printf("Enter the String:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
			str[i]=str[i]+32;
	}
	printf("\nString in Lowercase : %s",str);
}
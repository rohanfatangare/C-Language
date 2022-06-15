#include<stdio.h>
main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	if (no==0)
		printf("\nEntered Number is Zero");
	else if (no>0)
		printf("\nThe number is positive");
	else
		printf("\nThe number is negative");	
}
#include<stdio.h>
int main()
{
	int no,rem,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		sum=(rem)+sum;
		no=no/10;
	}
	printf("Addition of Digits is: %d",sum);
}
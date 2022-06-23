#include<stdio.h>
int main()
{
	int num,i;
	printf("Input any number: ");
	scanf("%d",&num);
	for(i=2;i<num-1;i=i+2)
	{
		printf(" 1/%d +",i);
	}
	printf(" 1/%d",i);
}
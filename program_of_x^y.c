#include<stdio.h>
int main()
{
	int x,y,power=1;
	printf("Enter the Base");
	scanf("%d",&x);
	printf("Enter the Index");
	scanf("%d",&y);
	while(1<=y)
	{
		power=power*x;
		y--;
	}
	printf("%d",power);
}
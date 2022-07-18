//PROGRAMME FOR FINDING THE GREATER NUMBER BETWEEN TWO NUMBERS//
#include<stdio.h>
int max(int no1, int no2)
{
		if (no1 < no2)
			return no2;
		else
			return no1;
}
int main()
{
	int no1,no2,ans;
	printf("Enter two numbers:\n");
	scanf("%d %d",&no1,&no2);
	ans=max(no1,no2);
	printf("The maximum number is %d",ans);
	return 0;
}

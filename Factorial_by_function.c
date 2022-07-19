#include<stdio.h>
int fact(int no)
{
	int i,f=1;
	for(i=1;i<=no;i++)
	{
		f=f*i;
	}
	return f;
}
main()
{
	int n,ans;
	printf("Enter any number:");
	scanf("%d",&n);
	ans=fact(n);
	printf("Factorial of given number is %d",ans);
}

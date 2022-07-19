#include<stdio.h>
#include<math.h>
int sqr(int base,int index)
{
	int ans;
	ans=pow(base,index);
	return ans;
}
main()
{
	int base,index,ans;
	printf("Enter the Value of base");
	scanf("%d",&base);
	printf("Enter the value of index");
	scanf("%d",&index);
	ans=sqr(base,index);
	printf("The result is %d",ans);
}
#include<stdio.h>
int main()
{
	int i,a[100],n,search,f=0;
	printf("Enter the limit of Data : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d number : ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter number to be Search a in List: ");
	scanf("%d",&search);
	for(i=0;i<n;i++) 
	{
		if(search==a[i])
		f=1;
	}
	if(f==1)
	{
		printf("Number is Found\n");
	}
	else
	{
		printf("Number is not Found\n");
	}
}	
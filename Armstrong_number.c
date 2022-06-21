#include<stdio.h>
#include<math.h>
main()
{
	int number,temp1,temp2,sum=0,count=0,rem;
	printf("Enter any Number for checking it is Armstrong or not :\n");
	scanf("%d",&number);
	temp1=number;
	temp2=temp1;
	while(temp1!=0)
	{
		temp1/=10;
		count++;
	}
	while(temp2!=0)
	{
		rem=temp2%10;
		sum+=pow(rem,count);
		temp2/=10;
	}
	if(sum==number)
	{
		printf("%d is an Armstrong Number",number);
	}
	else
	{
		printf("%d is not an Armstrong Number",number);
	}
}
//How to Define function
//1.type function with parameter with return

#include<stdio.h>  
int fact(int no)//paramaterised variable \ argument-result ofcaluculation depend on it
				//it is input from calling place- which varies every time
{
	int i,n,f=1;
	//Extra variable
	//local varible.which require temporary internally to a function
	//which memory is allocated when function is call and at ends it gets free.
	for(i=1;i<=no;i++)
	{
		f=f*i;
	}
	return f;//here it returns a value 
}
main()
{
	int n,ans,k;
	printf("Enter a number");
	scanf("%d",&n);
	for(k=1;k<=3;k++)
	ans=ans+fact(k*2)/k;
	printf("Factorial is %d",ans);
}
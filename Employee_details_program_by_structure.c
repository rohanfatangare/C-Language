#include<stdio.h>
struct employee
{
	int bsal;
	float hra,da,ta,grosssal;
	char ename[20];
}
main()
{
	struct employee empl1,empl2;
	printf("Enter Your Name:\n");
	gets(empl1.ename);
	printf("Please enter your basic salary:\n");
	scanf("%d",&empl1.bsal);
	empl1.hra=(0.50*empl1.bsal);
	empl1.da=(0.2*empl1.bsal);
	empl1.ta=(0.1*empl1.bsal);
	empl1.grosssal=(empl1.bsal+empl1.hra+empl1.da+empl1.ta);
	printf("Hello %s, Your salary is : %d\n",empl1.ename,empl1.bsal);
	printf("Your House rent allowance is : %f\n",empl1.hra);
	printf("Your dearance allowance is : %f\n",empl1.da);
	printf("Your travel allowance is : %f %\n",empl1.ta);
	printf("Your gross salary is : %f\n",empl1.grosssal);
}
#include<stdio.h>
main()
	{
	int p1,q1,t1,total=0;
	char ch;
	do
	{
	printf("Enter the value of Product in Rs.\n");
	scanf("%d",&p1);
	printf("Enter the quantity of Product\n");
	scanf("%d",&q1);
	t1=p1*q1;
	total=t1+total;
	printf("\nPress Y to add more product\nFor exit enter any key other than 'Y' or 'y'");
	scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
		if (total<100)
	{
		printf("\nYour Purchased Price is Rs.= %d\n",total);
	}
	else if(total<500)
	{
		printf("\nYour Purchased Price is Rs.= %d\nSo,you got a Gift\ni.e. A Key Ring\n",total);
	}
	else if(total<1000)
	{
		printf("\nYour Purchased Price is Rs.= %d\nSo,you got a Gift\ni.e. A Leather purse\n",total);	
	}
	else 
	{
		printf("\nYour Purchased Price is Rs.= %d\nSo,you got a Gift\ni.e. A Pocket Calculator\n",total);	
	}
	
	printf("\nThank you for Shopping with us\n");
}

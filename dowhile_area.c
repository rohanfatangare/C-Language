#include<stdio.h>
main()
{
	float aoc,aos,aor,pi=3.14;
	char ch;
	int rad,side,lent,brea;
	do
	{
	printf("Enter 'c' to calculate area of circle\n Enter 's' to calculate area of square\n Enter 'r' to calculate area of rectangle\n Enter 'x' to exit");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'c':printf("Enter radius of circle\n");
			scanf("%d",&rad);
			aoc=(pi*rad*rad);
		    printf("\narea of circle is %f",aoc);
		    break;
		case 's':printf("Enter side of square\n");
			scanf("%d",&side);
			aos=(side*side);
		   	printf("\narea of square %f",aos);
		   	break;
		case 'r':printf("Enter length of rectangle\n");
			scanf("%d",&lent);
			printf("Enter breadth of rectangle\n");
			scanf("%d",&brea);
			aor=(lent*brea);
		   	printf("\narea of reactangle %f",aor);
		   	break;
		case 'x':
			break;
		default:printf("\nyou have enter wrong choice\n");
		   break;
	}
	}
	while(ch!='x');
}

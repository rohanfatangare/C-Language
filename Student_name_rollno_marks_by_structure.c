#include<stdio.h>
struct student
{
	int rollno,marks[6],i;
	char name[20];
}
main()
{
	struct student stud1,stud2;
	int i;
	printf("Enter your name:\n");
	gets(stud1.name);
	printf("Enter your Roll number:\n");
	scanf("%d",&stud1.rollno);
	printf("Enter your Marks:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&stud1.marks[i]);
	}
	puts(stud1.name);
	printf("Your roll number is : %d\n",stud1.rollno);
	for(i=0;i<6;i++)
	{
		printf("Your marks are:%d\n",stud1.marks[i]);
 }
}
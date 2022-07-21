//How to Define function
//1.type function w\o parameter w\o return 


#include<stdio.h>
//function defination -> declares before main() so no need to be function declaration 
void greeting()
{
	printf("Hello!! Good Morning \1.....");
	printf("\n Have a nice day");
}
//this funtion is used to display only message so no need of parameters
//no need of return ->because it prints output within function itself
main()
{
	greeting();//function call 
}
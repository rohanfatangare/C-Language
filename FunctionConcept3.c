//How to Define function
//1.type function parameter w\o return
//we pass a name to a person to greet with name 
//avoid repetation of writing a code for multiple use. write once use many times

#include<stdio.h>  
void greeting(char a[10]);
main()
{
	char name[20];
	greeting("Harshada");//function call 1
	printf("\nEnter your name ");
	scanf("%s",name);
	greeting(name);//function call 2
}
//function defination -> declares after main()
void greeting(char a[10])
{
	printf("Hello %s !! Good Morning \1.....",a);
	printf("\n Have a nice day");
}
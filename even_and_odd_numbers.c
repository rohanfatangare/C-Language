#include <stdio.h>
 
void main()
{
 int i,last=100;

 //While Loop

 //Code For Even Number List
 printf("\nEven Number List :\n ");
 
 i=2;
 while(i <= last)
 {
  printf(" %d",i);
  i = i + 2;
 }

 //Code For Odd Number List
 printf("\nOdd Number List :\n ");

 i=1;
 while(i <= last)
 {
  printf(" %d",i);
  i = i + 2;
 }
}
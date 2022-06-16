#include<stdio.h>
int main()
{
     int a1,a2,a3;
     printf("Enter Three Angles of Triangle");
     printf("\n-------------------------------\n");
     printf("Enter First Angle  : ");
     scanf("%d", &a1);
     printf("\nEnter Second Angle : ");
     scanf("%d",&a2);
     printf("\nEnter Third Angle  : ");
     scanf("%d",&a3);
     printf("--------------------------------\n");
     if(a1+a2+a3==180) // condition to check triangle formed or not
     {
          printf("\nTriangle Formed\n");
          /*If all the angles are equal then it is equilateral triangle*/
          if(a1==60 && a2==60 && a3==60)  //
          {
               printf("\nEquilateral Triangle\n");
          }
          /*If any two angles are same then it is isosceles triangle*/
          if(a1==a2 || a1==a3 || a2==a3)  
          {
               printf("\nIsosceles Triangle\n");
          }
          /*If any one angle is 90 then it is right angle triangle*/
          if(a1==90 || a2==90 || a3==90)
          {
               printf("\nRight Angle Triangle\n"); //
          }
          /*If all the sides are unequal then it is scalene triangle*/
          if(a1!=a2 || a2 != a3 || a3!= a1)  
          {
               printf("\nScalene Triangle");
          }
     }
     else
     {
          printf("\nTriangle NOT formed");
     }
     return 0;
}
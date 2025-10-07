//write a program to convert meters to centimeters.//
#include<stdio.h>
int main()
{
 float meter,centimeter;
 printf("enter length in meters:");
 scanf("%f",&meter);
 centimeter=meter * 100;
 printf("%.2f meters = %.2f centimeters\n",meter,centimeter);
 return 0;
} 

//write a program to calculate the area of a triangle.//
#include<stdio.h>
int main()
{
 int h,b;
 float area;
 printf("Enter height:-");
 scanf("%d",&h);
 printf("Enter base:-");
 scanf("%d",&b);
 area=(h * b)/2;
 printf("Area of triangle is %.2f",area);
} 

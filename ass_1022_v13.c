// write a program to compute the product of elements in a 1D array.//
#include<stdio.h>
int main()
{
  int n,i;
  float arr[100],product = 1;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%f",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
  product = product * arr[i];
  }
  printf(" The Product of all elements = %.2f\n",product);
  return 0;
 } 

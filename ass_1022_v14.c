//write a program to find the second largest element in an array.//
#include<stdio.h>
int main()
{
  int n,i;
  int arr[100];
  int largest,secondlargest;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  if(n < 2)
  {
    printf("Array should have at least two elements.\n");
    return 0;
  }
  if(arr[0] > arr[1])
  {
    largest = arr[0];
    secondlargest = arr[1];
  }
  else
  {
    largest = arr[1];
    secondlargest = arr[0];
   }
   for(i = 2;i < n; i++)
   {
    if(arr[i] > largest)
   {
     secondlargest = largest;
     largest = arr[i];
    }
    else if(arr[i] > secondlargest && arr[i] != largest)
    {
      secondlargest = arr[i];
    }
   }
   printf("The second largest element is: %d\n",secondlargest );
   return 0;
}   
      
  
   

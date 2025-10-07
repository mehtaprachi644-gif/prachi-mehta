//write a program to check whether a number is a prime palindrome.//
#include<stdio.h>
int isprime(int num)
{
  if(num <= 1)
  return 0;
  for (int i=2; i * i <= num;i++)
  {
    if (num % i == 0)
    return 0;
  }
  return 1;
 }
 int ispalindrome(int n)
 {
  int reversed = 0,original = n,remainder;
  while (n != 0)
  {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
    }
    return (original == reversed);
   }
   int main()
   {
     int num;
     printf("Enter a number:");
     scanf("%d",&num);
     if (isprime(num) && ispalindrome(num))
     printf("%d is a prime palindrome.\n",num);
     else
     printf("%d is not a prime palindrome.\n",num);
     return 0;
}     

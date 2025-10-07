//write a program to reverse words in a string.//
#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],temp[100];
  int i,j,start,end,len;
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
  len = strlen(str);
  end = len-1;
  for (i=len-1;i >=0;i--)
  {
  if (str[i]==' '|| i==0)
  {
  if (i == 0)
  start = 0;
  else
  start = i + 1;
  for (j = start;j <=end; j++)
  strncat(temp,&str[j],1);
  strcat(temp," ");
  end = i-1;
   }
 }
 printf("Reversed words: %s\n",temp);
  return 0;
 } 
  

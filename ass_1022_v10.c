//write a program to count the number of words in a string.//
#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  int count = 0,i;
  printf("Enter a string:");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i] !='\0';i++)
  {
    if((str[i] == ' '|| str[i]== '\n'|| str[i] == '\t')&&(str[i-1] !=' '&& str[i-1] !='\n'&& str[i-1] != '\t'))
    {
      count++;
      }
   }
   if(strlen(str)>0)
   count++;
   printf("Number of words: %d\n",count);
   return 0;
}

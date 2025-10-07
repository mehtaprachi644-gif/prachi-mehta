//write a program to convert all vowels in a string to uppercase.//
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i;
 printf("enter a string:");
 fgets(str,sizeof(str),stdin);
 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
str[i]=str[i]-32;
  }
}
printf("string after converting vowels to uppercase:%s\n",str);
return 0;
}
   


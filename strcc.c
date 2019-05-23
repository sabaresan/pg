#include<stdio.h>

#include<string.h>

int main()
{
   
char s1[50],s2[50];
   
int a,b;
   
gets(s1);
   
gets(s2);
   
a=strlen(s1);
   
b=strlen(s2);
   
if(a>b)
  
    
printf("%s",s1);
   
else
   
printf("%s",s2);
   
   

}
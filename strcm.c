#include <stdio.h>

#include<string.h>;

int main() {

    
char a[50],b[50];
    
int i=0,j=0;
    
gets(a);
    
gets(b);
    
for(i=0;a[i]!='\0';i++);
        
    
for(j=0;b[j]!='\0';j++,i++)
    
{
        
a[i]=b[j];
    
}
    
    
a[i]='\0';
    
printf("%s",a);
    
return 0;
    

}
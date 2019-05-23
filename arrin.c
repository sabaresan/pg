#include <stdio.h>
int main()
{
    
int arr[50],i,num,p,c=0;
int n=sizeof(arr)/sizeof(arr[0]);
scanf("%d",&num);
for(i=0;i<n;i++)
{   
    scanf("%d",&arr[i]);
    if(arr[i]==num)
    {
        p=i;
        printf("%d%d ",arr[i],p);
        c=1;
        break;
    }
   
}
}


#include<stdio.h>


int main()
{
    
int n,i,sum;
    
int avg;
    
sum=avg=0;
    
scanf("%d",&n);
    
int arr[n];
    
for(i=0;i<n;i++)
    
{
        
scanf("%d",&arr[i]);
        
sum=sum+arr[i];
    
}
    
avg=(int)sum/n;
    
printf("%d ",avg);
    

}
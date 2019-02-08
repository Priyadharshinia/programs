#include <stdio.h>
int main(void)  
{
int n,i;
scanf("%d",&n); 
for(i=1;i<n;i++) 
{ 
if(n%i==0) 
printf("%d ",i);
}
for(i=n;i==n;i++)
if(n%i==0)
{
if(n%2!=0)
printf("%d",n);
}
return 0;
}

#include<stdio.h>
int main()
{
int a[100],n,i; 
int m;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<n;i++)
{
if(m>a[i])
{
m=a[i];
}
}
printf("%d",m);
return 0;
}

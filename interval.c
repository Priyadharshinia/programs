#include<stdio.h>
int main()
{
int n,m,i;
scanf("%d",&n);
scanf("%d",&m);
for(i=n+1;i<m;i++) 
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
return 0;
}

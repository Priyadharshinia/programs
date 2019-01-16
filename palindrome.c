#include<stdio.h>
int main()
{
int sum=0,r,n,no;
scanf("%d",&no);
n=no;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(no==sum)
{
printf("yes");
}
else 
{
printf("no");
}
return 0;
}

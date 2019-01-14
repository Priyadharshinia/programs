#include<stdio.h>
int main()
{
int n,no,r;
int arm=0;
scanf("%d",&no); 
n=no;
while(n>0) 
{
r=n%10;
arm=arm+pow(r,3);
n=n/10;
}
if(arm==no)
{
printf("yes");
}
else 
{
printf ("no");
}
return 0;
}

#include<stdio.h>
int main()
{
int fact=1,no,i;
scanf("%d",&no);
for (i=1;i<=no;i++)
{
fact=fact*i;
}
printf ("%d", fact);
return 0;
}

#include <stdio.h>
int main(void)
{
   int a,b;
   float m;
   scanf("%d%d",&a,&b);
   m=a>>b;
   printf("%.2f",m);
return 0;
}

#include <stdio.h>
int main(void)
 {
int a,b,x,y,r,lcm;
scanf("%d%d",&x,&y);  
a=x;b=y; 
while(b!=0)
{ 
r=a%b;
a=b; 
b=r;
} 
lcm=x*y/a;
printf("%d",lcm);
return 0;
}

#include <stdio.h>
int main(void)
 {
int a,b,x,y,r;
scanf("%d%d",&x,&y);  
a=x;b=y; 
while(b!=0)
{ 
r=a%b;
a=b; 
b=r;
} 
printf("%d",a);
return 0;
}

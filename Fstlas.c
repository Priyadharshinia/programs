#include <stdio.h>
int main()  
{
int long fst,las,sum=0,n;
scanf("%ld",&n);
las=n%10;
while(n>=10)
{
	n=n/10;
}
fst=n;
sum=fst+las;
printf("%ld",sum);
return 0;
}

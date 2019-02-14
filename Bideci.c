#include<stdio.h>
#include<math.h>
int main(void)
{
    int long n;
    int r,i,sum=0;
    scanf("%ld",&n);
    i=0;
    while(n>0)
    { 
    	r=n%10; 
    	sum=sum+r*pow(2,i);
    	n=n/10;
    	i++;
    }
    printf("%d",sum);
    return 0;
}

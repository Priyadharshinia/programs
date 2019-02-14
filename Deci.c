#include <stdio.h>
int main(void)
{
    int n,bi[100],i,r,j;
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
    	r=n%2;
    	bi[i]=r;
    	i++;
    	n=n/2; 
    }
    for(j=i-1;j>=0;j--)
    {
    	printf("%d",bi[j]);
    }
	return 0;
}

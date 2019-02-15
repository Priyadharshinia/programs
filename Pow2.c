#include <stdio.h>
#include<math.h>
int main(void) 
{
	int i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(n==pow(i,2))
    	c++;
    }
    if(c==1)
    printf("yes");
    else
    printf("no");
	return 0;
}

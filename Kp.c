#include <stdio.h>
int main(void) 
{
	int a[100],n,i,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(k==i+1)
    	printf("%d",a[i]);
    }
	return 0;
}

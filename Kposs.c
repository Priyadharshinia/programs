#include <stdio.h>
int main(void)
{
    int n,k,a[100],i,j,t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]>a[j])
    		{
    			t=a[i];
    			a[i]=a[j];
    			a[j]=t;
    		}
    	}
    }
    printf("%d",a[n-k]);
	return 0;
}

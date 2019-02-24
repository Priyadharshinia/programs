#include <stdio.h>
int main()
{
    int n,k,a[100],i,j,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]+a[j]==k)
    		{
    			c++;
    		}
    	}
   	}
    if(c>=1)
    {
    	printf("yes");
    }
    else
    {
    	printf("no");
    }
	return 0; 
}

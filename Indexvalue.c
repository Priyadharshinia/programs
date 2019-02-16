#include <stdio.h>
int main(void)
{
	int a[100],i,n,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		printf("%d ",a[i]);
		if(i!=a[i])
		{
		c++;
		}
	}
	if(c==n)
	{
		printf("-1");
	}
return 0;
}

	
	
	
	

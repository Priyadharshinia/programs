#include <stdio.h>

int main(void) 
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(i=1;i<n;i++)
	{
		if(a[i]%a[i-1]==0)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}

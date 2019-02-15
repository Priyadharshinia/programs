#include <stdio.h>

int main(void)
{
	int n,k,a[1000],i,c=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		c++;
	}
	if(c>=1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

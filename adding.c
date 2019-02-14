#include <stdio.h>
int main(void)
{
	int n,a[100],i,j,sum,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		sum=a[j]+a[j+1];
		c=c+sum;
	}
	printf("%d",c);
	return 0;
}

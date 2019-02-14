#include <stdio.h>
int main(void) 
{
	int a[100],n,i,s=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		s=s+i; 
	}
	printf("%d",s);
	return 0;
}

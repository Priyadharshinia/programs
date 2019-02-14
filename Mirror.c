#include <stdio.h>
int main(void) 
{
	int a[100],n,b[100],i,count=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
			if(a[i]==b[j])
			{
				count++;
			}
	}
if(count==n)
{
	printf("yes");
}
else
{
	printf("no");
}
	return 0;
}

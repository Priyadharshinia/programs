#include <stdio.h>
int main(void)
{
	int p[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=n-1;i>=0;i--)
	{
	   if(i!=0)
	   {
	   	printf("%d->",p[i]); 
	   }
	   else
	   {
	   printf("%d",p[i]);
	   }
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,k,a[100],b[100],i,j,c=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(j=0;j<k;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0,j=0;i<n-1,j<k-1;i++,j++)
	{
		if(a[i]==b[j])
	    {
	    	c=c+2;
	    }
	}
	printf("%d",c);
	return 0;
}

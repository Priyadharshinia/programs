#include <stdio.h>

int main(void) 
{
	int a[100],n,i,j,diff,t;
	scanf("%d",&n);
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
     diff=a[n-1]-a[0];
     printf("%d",diff);
	return 0;
}

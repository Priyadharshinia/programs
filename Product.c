#include<stdio.h>
int main(void)
{
	int a[100],n,pro=1,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		pro=pro*a[i];
	}
	if(pro>0)
	printf("%d",pro);
	else
	printf("%d",-pro);
	return 0;
}

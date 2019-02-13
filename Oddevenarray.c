#include <stdio.h>
int main(void) 
{
	int a[100],n,i,even=0,odd=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   } 
   for(i=0;i<n;i++)
   {
   	if(a[i]%2==0)
   	even++;
   	else
   	odd++;
   }
   if(odd>even)
   {
   	for(i=0;i<n;i++)
   	{
   		if(a[i]%2==0)
   		{
   			printf("%d",a[i]);
   		}
   	} }
   	else
   	{
   		for(i=0;i<n;i++)
   		{
   			if(a[i]%2!=0)
   			{
   				printf("%d",a[i]);
   			}
   		}
   	}
	return 0;
}

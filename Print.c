#include <stdio.h>
int main(void)
{
	char a[100];
	int i,count=0,c=0;
	gets(a); 
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		count++;
	}
	for(i=1;i<=count;i++)
	{
		if(count%i==0)
		{
		c++;
		}
	}
	if(c==2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

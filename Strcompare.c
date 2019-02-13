#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100],b[100];
	int i,j,count=0;
	scanf("%s %s",a,b);
	for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
	{
		if(a[i]==b[j])
		{
			count++;
		}
	}
	if(count==strlen(a)&&count==strlen(b))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

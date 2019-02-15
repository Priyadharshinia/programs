#include <stdio.h>
int main(void)
{
	char a[1000];
	int i,c=0,k=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
		c++;
		if(a[i]==')')
		k++;
	} 
	if(c==k)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

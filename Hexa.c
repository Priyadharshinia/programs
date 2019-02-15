#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,c=0,l;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
	   if(a[i]=='A'||a[i]=='B'||a[i]=='C'||
		a[i]=='D'||a[i]=='E'||a[i]=='F'||
		a[i]=='0'||a[i]=='1'||a[i]=='2'||
		a[i]=='5'||a[i]=='6'||a[i]=='7'||
		a[i]=='8'||a[i]=='9'||a[i]=='4'||a[i]=='3')
		
	   c++;
	}
	if(c==l)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}

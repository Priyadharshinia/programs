#include <stdio.h>
#include<ctype.h>
int main(void) 
{
	char a[100];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	 if(a[i]>='A'&&a[i]<='Z')
	 printf("%c",tolower(a[i]));
	 else
	 printf("%c",toupper(a[i]));
	}
	return 0;
}

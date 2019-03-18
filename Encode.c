#include <stdio.h>
int main(void)
{
	char a[100];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='X')
		{
			printf("%c",'A');
		}
		else if(a[i]=='Y')
		{
			printf("%c",'B');
		}
		else if(a[i]=='Z')
		{
			printf("%c",'C');
		}
		else
		{
			printf("%c",a[i]+3);
		}
	} 
	return 0;
}

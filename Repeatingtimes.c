#include <stdio.h>
int main(void)
{
	char a[100],k;
	int count=0,i;
	scanf("%s %c",a,&k);
	for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]==k)
    	count++;
    }
    printf("%d",count);
	return 0;
}

#include<stdio.h>
int main(void)
{
	char a[100];
	int k,count=0,i;
	scanf("%s %d",a,&k);
	for(i=0;a[i]!='\0';i++)
	{   
		count++;
		if(count%k==0)
		printf("%c",toupper(a[i]));
		else
		printf("%c",a[i]);
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int n,i,j,t=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
     for(j=i+1;j<n;j++)
     {
     	if(a[i]<a[j])
     	{
     		t=a[i];
     		a[i]=a[j];
     		a[j]=t;
     	}
     }
	}
	printf("%s",a);
	return 0;
}

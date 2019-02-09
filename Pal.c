#include<stdio.h>
#include<string.h>
int main() 
{
char a[100];
int l,j,flag=0; 
scanf("%s",a);
l=strlen(a); 
for(j=0;j<l;j++) 
{ 
  if(a[j]==a[l-j-1]) 
  { 
   flag=flag+1;
  }
}
if(flag==l) 
{ 
printf("yes");
} 
else 
{ 
printf("no");
}
	return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void) 
{
  char a[100];
  int i,count=0,l; 
scanf("%s",a);  
l=strlen(a);
for(i=0;a[i]!='\0';i++) 
{ 
   if(isdigit(a[i])||a[i]=='.') 
   { 
     count++;
   }
} 
if(count==l) 
{ 
  printf("Yes");
} 
else 
{
  printf("No");
}
	return 0;
}

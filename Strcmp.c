#include <stdio.h>
#include<string.h>
int main(void) 
{
char s1[100],s2[100]; 
int a,b;
scanf("%s%s",s1,s2); 
a=strlen(s1); 
b=strlen(s2);
if(a>b) 
{ 
printf("%s",s1);
} 
else if(a<b) 
{ 
printf("%s",s2);
} 
else 
{ 
printf("%s",s1);
}
	return 0;
}

#include <stdio.h>
int main(void) 
{
char a[100]; 
int i,n,count=0; 
scanf("%s",a);
n=strlen(a); 
for(i=0;i<n;i++) 
{ 
  if(a[i]=='0'||a[i]=='1') 
  { 
    count++;
  }
} 
if(count==n) 
{ 
  printf("yes");
} 
else 
{ 
  printf("no");
}
	return 0;
}

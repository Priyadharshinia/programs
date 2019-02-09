#include <stdio.h>
int main(void)  
{
	char a[100]; 
int i,j,count=0;
scanf("%s",a); 
for(i=0;a[i]!='\0';i++) 
{ 
  for(j=i+1;a[j]!='\0';j++) 
  { 
     if(a[i]==a[j]) 
     { 
      count++;
     }
  }
} 
if(count>=1) 
{ 
printf("No");
} 
else 
{ 
printf("Yes");
}
	return 0;
}

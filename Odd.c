#include<stdio.h>
#include<string.h>
int main(void) 
{
char n[100];
int i;
scanf("%s",n);  
for(i=0;n[i]!='\0';i++) 
{
if(n[i]%2!=0) 
{ 
printf("%c ",n[i]);
}

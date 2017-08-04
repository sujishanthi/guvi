#include<stdio.h>
void main()
{
char a[10],string[10];
int i;
printf("enter the string");
gets(string);
for(i=0;i!='\0';i++)
if(i%2==0)
a[i+2]=string[i];
}

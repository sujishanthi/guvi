#include<stdio.h>
void main()
{
int i,n,t=1,s=1,num;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",t);
num=t+s;
t=s;
s=num;
}

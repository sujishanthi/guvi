#include<stdio.h>
void main()
{
int i,n,t=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
t=1;
break;
}
}
if(t==0)
printf("%d",n);
else
printf("%d",n)
}

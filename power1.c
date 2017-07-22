#include<stdio.h>
void main()
{
int i,b,e,power;
scanf("%d",&b);
scanf("%d",&e);
for(i=1;i<=e;i++)
{
power=power*b;
}
printf("%d^%d=%d",b,e,power);
}

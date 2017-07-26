#include<stdio.h>
void main()
{
int i,num,fac=1;
scanf("%d",&num);
if(num<0)
printf("negative not allowed");
else
{
for(i=0;i<=num;i++)
{
fac=i*fac;
}
printf("%d",fac);
}
}

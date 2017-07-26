#include<stdio.h>
void main()
{
int i,n,f=1;
scanf("%d",&n);
if(n<0)
printf("negative not allowed");
else
{
for(i=0;i<=n;i++)
{
f*=i;
}
printf("%d",f);
}
}

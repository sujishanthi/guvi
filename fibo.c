#include<stdio.h>
void main()
{
int i=0,j=1;n,sum;
printf("%d%d",&i,&j);
for(n=2;n<=6;n++)
{
sum=i+j;
i=j;
j=sum;
}
printf("%d",sum);
}

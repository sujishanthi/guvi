#include<stdio.h>
void main()
{
int n,i,j,k,sum;
scanf("%d",&n);
while(n>0)
{
i=n%10;
j=i/10;
k=j/10;
sum=n*i*j*k;
}
printf(%d",sum);
}

#include<stdio.h>
void main()
{
int r,n,sum=0;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==n)
printf("reverse no");
else
printf("not a reverse number");
}

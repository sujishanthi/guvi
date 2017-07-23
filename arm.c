#include<stdio.h>
void main()
{
int sum=0,r,n,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=r*r*r;
n=n/10;
}
if(num==sum)
printf("armstrong no");
else
printf("not a armstrong no");
}

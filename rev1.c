#include<stdio.h>
void main()
{
int rev,n,sum=0;
scanf("%d",&n);
while(n!=0)
{
rev=n%10;
sum=sum*10+rev;
n=n/10;
}
if(sum==n)
printf("Reverse number");
else
printf("Not a reverse number");
}

#include<stdio.h>
void main()
{
int i,n,sum=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>=0)
{
i=n%10;
sum=(sum*10)+i;
n=n/10;
}
if(n=temp)
printf("palindrome no");
else
printf("not a palindrome no");
}

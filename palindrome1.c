#include<stdio.h>
void main()
{
int i,number,sum=0,temp;
printf("enter the number");
scanf("%d",&number);
temp=number;
while(number>=0)
{
i=number%10;
sum=(sum*10)+i;
number=number/10;
}
if(number=temp)
printf("palindrome no");
else
printf("not a palindrome no");
}

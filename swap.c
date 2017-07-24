#include<stdio.h>
void main()
{
int temp,x,y;
printf("enter the numbers");
scanf("%d%d",&x,&y);
temp=x;
x=y;
y=temp;
printf("after swapping first number");
printf("after swapping second number");
}

#include<stdio.h>
int getnumber();
void main()
{
int num=0;
num=getnumber();
while(!((num<=9)&&(num>=1)))
{
printf("Error..The number is out of the range");
int getnumber()
}
printf("Enter the value %d",num);
}
int getnumber()
{
int n;
scanf("%d",&n);
return n;
}
}

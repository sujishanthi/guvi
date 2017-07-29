#include<stdio.h>
void main()
{
int first,second,*p,*q,sum;
scanf("%d%d",&first,&second);
p=&first;
q=&second;
sum=*p+*q;
printf("%d",sum);
}

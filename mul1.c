#include<stdio.h>
void main()
{
int j,n;
printf("enter the number");
scanf("%d",&n);
for(j=1;j<=10;++j)
{
printf("%d*%d=%d",n,j,n*j);
}
}

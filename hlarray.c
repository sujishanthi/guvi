#include<stdio.h>
void main()
{
int a[10],h,l,i;
for(i=0;i<10;i++)
{
printf("enter the number %d",i+1);
scanf("%d",&val[i]);
}
l=val[0];
h=val[0];
for(i=0;i<10;i++)
{
if(val[i]>h)
h=val[i];
else
{
if(val[i]<l)
l=val[i];
}
}
printf("highest no",h);
printf("lowest no",l);
}

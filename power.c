#include<stdio.>
void main()
{
int b,e;
long r=1;
printf("enter the base");
scanf("%d",&b);
printf("enter the exponent");
scanf("%d",&e);
while(e!=0)
{
r*=b;
--e;
}
printf("answer=%d",result);
return(0);
}

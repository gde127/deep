#include<stdio.h>
void main()
{
int a,g;
printf("enter the number");
scanf("%d",&a);
printf("enter the number");
scanf("%d",&g);
printf("even number interval is",a,g);
for(i=a;i<=g;++i)
{
rem=i%2;
if(rem==0)
printf("print the even number interval);
}
return(0);
}

#include<stdio.h>
void main()
{
int n,i=2;flag=0;
printf("enter the number");
scanf("%d",&n);
while(i<sqrt(n))
{
if(n%i==0)
{
flag=1;
}
i++;
if(flag=1)
printf("prime number");
else
printf("not a prime number");
}
return(0);
}


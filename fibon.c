#include <stdio.h>

int main()
{
 int nt,w1=0,w2=1,i,n;
 printf("enter the number");
 scanf("%d",&n);
 printf("fibonacci series:");
 for(i=1;i<=n;++i)
 {
    printf("%d",w1);
    nt=w1+w2;
    w1=w2;
    w2=nt;
 }
printf("fibonacci series is %d",nt);


    return 0;
}



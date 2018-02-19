#include <stdio.h>

int main()
{
    int n,a1=0,a2=1,next,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(i=1;i<=n;++i)
    {
        printf("%d",a1);
        next=a1+a2;
        a1=a2;
        a2=next;
    }

    return 0;
}

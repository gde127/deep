#include <stdio.h>
int main()
{
    int n, on, r, re = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    on= n;

    while (on != 0)
    {
        r= on%10;
        re+= r*r*r;
        on /= 10;
    }

    if(r== n)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}

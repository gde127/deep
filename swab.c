#include <stdio.h>

int main() {
    int a;
    int b ;
    printf(" value of i=%d k=%d before swapping", a, b);

    a = a^ ^ b;
    b = a^ b;
    a= a ^ b;
    printf("value of i=%d k=%d after swapping", a, b);

    return 0;
}

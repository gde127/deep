#include <stdio.h>
#include <string.h>

int main()
{
    char m[100], n[100];
    
    printf("Enter the first string\n");
    gets(m);
    
    printf("Enter the second string\n");
    gets(n);
    
    strcat(m,n);
    
    printf("String obtained on concatenation is %s\n",a);
    
    return 0;

}

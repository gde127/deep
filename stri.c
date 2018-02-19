#include <stdio.h>

int main()
{
    int i;
    printf("enter the word");
    scanf("%d",&i);
    if((i=='a'&&i=='z')||(i=='A'&&i=='Z')||(i=='0'&& i=='9'))
    printf("present");
    else
    printf("not present");

    return 0;
}

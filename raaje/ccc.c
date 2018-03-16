#include <stdio.h>

int main()
{
    char s[20];int n,count,i;
    printf("enter the sequence");
    scanf("%s",s);
    for(i=0;s[i]!=0;i++)
    if(s[i]=' ')
    {
        count=count+1;
    }
    printf("the no of words is %d",count);
    
}

#include <stdio.h>

int main()
{
    char s[20];
    int i,f=0,m;
    printf("enter the sequence");
    scanf("%s",s);
    for(i=0;i<=m;i++)
    {
        if((s[i]=='0')||(s[i]=='1'))
        {
            f=1;
        }
        else
        {
            f=0;
        }
        if(f==1)
        {
            printf("yes");
        }
    }return 0;
}

#include <stdio.h>
 
int main()
{
    char    str[100];
    int countSpaces;
    int counter;
 
    //
   countSpaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
       
        else if(str[counter]==' ')
            countSpaces++;
        
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    return 0;

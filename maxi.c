#include <stdio.h>

 

int main()
{
    int a[MAX_SIZE];
    int i, max, min, size;

 
    printf("Enter size of the array: ");
    scanf("%d", &size);

   
    printf("Enter elements in he array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }


    
    max = a[0];
   

    
    
    for(i=1; i<size; i++)
    {
       
        if(arr[i] > max)
        {
            max = a[i];
        }


    }

    
    printf("Maximum element = %d\n", max);
    

    return 0;
}

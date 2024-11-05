#include <stdio.h>
#include "Lib.h"

int result = 0;



int main() 
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        pr();
    }
    printf("Enter a number: ");
    scanf("%d", &result);
    
    printf("RESULT: %d\n", result);

    return 0;
}
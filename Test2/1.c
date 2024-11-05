#include <stdio.h>
#include <stdlib.h>

int result = 0;


int main() 
{
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", i);
    }
    printf("Enter a number: ");
    scanf("%d", &result);
    
    printf("RESULT: %d\n", result);
    system("pause");

    return 0;
}
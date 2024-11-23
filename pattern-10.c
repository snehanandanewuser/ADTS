#include<stdio.h>

int main() 
{
    int i, j;
    char alphabet;

    for(i = 5; i >= 1; i--) 
    {
        alphabet = 'A';     
        for (j = 1; j <= i; j++)  
        {
            printf("%c ", alphabet);  
            alphabet++;  
        }
        printf("\n");  
    }
    return 0;
}

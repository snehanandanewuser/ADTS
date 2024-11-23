#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the number of lines:\n");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }

    return 0;
}

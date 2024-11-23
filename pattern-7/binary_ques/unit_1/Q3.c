#include <stdio.h>

int main() 
{
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  
    int row_sum[rows];       
    int col_sum[cols];       
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        row_sum[i] = 0;  
    }

    for (int j = 0; j < cols; j++) 
    {
        col_sum[j] = 0;  
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            row_sum[i] += matrix[i][j];  
            col_sum[j] += matrix[i][j];  
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++)
     {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }

    return 0;
}

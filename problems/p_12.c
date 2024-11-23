#include <stdio.h>

int countNonZeroElements(int arr[][100], int rows, int cols) {
    int count = 0;

    // Loop through the 2D array and count non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int rows, cols;

    // Input: Number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols]; // Declare the 2D array

    // Input: Elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call function to count non-zero elements
    int nonZeroCount = countNonZeroElements(arr, rows, cols);

    // Output: Total number of non-zero elements
    printf("Total number of non-zero elements: %d\n", nonZeroCount);

    return 0;
}


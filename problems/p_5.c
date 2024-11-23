#include <stdio.h>

void matrixMultiplication(int *A, int *B, int *C, int rowA, int colA, int rowB, int colB) {
    // Check if multiplication is possible (cols of A must be equal to rows of B)
    if (colA != rowB) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    // Matrix multiplication: C = A * B
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            *(C + i * colB + j) = 0;  // Initialize C[i][j] to 0
            for (int k = 0; k < colA; k++) {
                *(C + i * colB + j) += *(A + i * colA + k) * *(B + k * colB + j);
            }
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rowA, colA, rowB, colB;

    // Input: Dimensions of matrix A
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &rowA, &colA);

    // Input: Dimensions of matrix B
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &rowB, &colB);

    // Matrix multiplication is possible only if the number of columns in A is equal to the number of rows in B
    if (colA != rowB) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Dynamically allocate memory for matrices
    int A[rowA][colA], B[rowB][colB], C[rowA][colB];

    // Input: Elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input: Elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication: C = A * B
    matrixMultiplication(&A[0][0], &B[0][0], &C[0][0], rowA, colA, rowB, colB);

    // Output: The resulting matrix C
    printf("\nThe product of matrices A and B is:\n");
    printMatrix(&C[0][0], rowA, colB);

    return 0;
}

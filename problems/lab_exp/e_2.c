#include <stdio.h>
#include <limits.h>

void printOptimalParens(int i, int j, int n, int *bracket, char *name) {
    if (i == j) {
        printf("%c", (*name)++);
        return;
    }
    printf("(");
    printOptimalParens(i, *((bracket + i * n) + j), n, bracket, name);
    printOptimalParens(*((bracket + i * n) + j) + 1, j, n, bracket, name);
    printf(")");
}

void matrixChainOrder(int p[], int n) {
    int dp[n][n];
    int bracket[n][n]; 

    for (int i = 1; i < n; i++)
        dp[i][i] = 0;

    for (int L = 2; L < n; L++) { 
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                    bracket[i][j] = k;
                }
            }
        }
    }
    printf("Minimum number of multiplications: %d\n", dp[1][n - 1]);
    printf("Optimal Parenthesization: ");
    char name = 'A';
    printOptimalParens(1, n - 1, n, (int *)bracket, &name);
    printf("\n");
}

int main() {
    // Example input: dimensions of matrices
    int arr[] = {40, 20, 30, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    matrixChainOrder(arr, n);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int board[MAX], n;

bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || (abs(board[i] - col) == abs(i - row))) {
            return false;
        }
    }
    return true;
}

void printSolution() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void solveNQueens(int row) {
    if (row == n) {
        printSolution();
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solveNQueens(row + 1);
        }
    }
}

int main() {
    printf("Enter the value of N for the N-Queen problem: ");
    scanf("%d", &n);

    printf("Solutions to the %d-Queen problem:\n", n);
    solveNQueens(0);

    return 0;
}

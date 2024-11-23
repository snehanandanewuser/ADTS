#include <stdio.h>

int max_value = 0;

// Recursive function for backtracking
void knapsackBacktracking(int weights[], int values[], int n, int capacity, int current_value, int current_weight, int index) {
    if (current_weight > capacity) return; // Exceeded capacity

    if (index == n) { // Reached the end of items
        if (current_value > max_value) max_value = current_value;
        return;
    }

    // Include the current item
    knapsackBacktracking(weights, values, n, capacity, current_value + values[index], current_weight + weights[index], index + 1);

    // Exclude the current item
    knapsackBacktracking(weights, values, n, capacity, current_value, current_weight, index + 1);
}

int main() {
    int weights[] = {10, 20, 30};
    int values[] = {60, 100, 120};
    int capacity = 50;
    int n = sizeof(weights) / sizeof(weights[0]);

    knapsackBacktracking(weights, values, n, capacity, 0, 0, 0);

    printf("Backtracking: Maximum Value = %d\n", max_value);

    return 0;
}

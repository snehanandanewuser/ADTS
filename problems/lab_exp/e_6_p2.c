#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int level;
    int value;
    int weight;
    float bound;
} Node;

int n;
int weights[10], values[10], capacity;

// Calculate upper bound
float calculateBound(int current_value, int current_weight, int level) {
    if (current_weight >= capacity) return 0;

    float bound = current_value;
    int total_weight = current_weight;

    for (int i = level + 1; i < n; i++) {
        if (total_weight + weights[i] <= capacity) {
            total_weight += weights[i];
            bound += values[i];
        } else {
            bound += (capacity - total_weight) * ((float)values[i] / weights[i]);
            break;
        }
    }
    return bound;
}

// Branch & Bound
void knapsackBranchAndBound() {
    Node queue[100];
    int front = 0, rear = 0;
    int max_value = 0;

    Node root = { -1, 0, 0, calculateBound(0, 0, -1) };
    queue[rear++] = root;

    while (front < rear) {
        Node current = queue[front++];
        if (current.bound <= max_value) continue;

        Node left = { current.level + 1, current.value + values[current.level + 1], current.weight + weights[current.level + 1], 0 };
        if (left.weight <= capacity && left.value > max_value) max_value = left.value;
        left.bound = calculateBound(left.value, left.weight, left.level);

        if (left.bound > max_value) queue[rear++] = left;

        Node right = { current.level + 1, current.value, current.weight, calculateBound(current.value, current.weight, current.level + 1) };
        if (right.bound > max_value) queue[rear++] = right;
    }

    printf("Branch & Bound: Maximum Value = %d\n", max_value);
}

int main() {
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights and values of items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &weights[i], &values[i]);
    }

    printf("Enter capacity of knapsack: ");
    scanf("%d", &capacity);

    knapsackBranchAndBound();

    return 0;
}

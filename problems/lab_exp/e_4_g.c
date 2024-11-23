#include <stdio.h>

typedef struct {
    int weight;
    int value;
    float ratio;
} Item;

void sortItemsByRatio(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (items[i].ratio < items[j].ratio) {
                Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int knapsackGreedy(Item items[], int n, int capacity) {
    sortItemsByRatio(items, n);

    int totalValue = 0, currentWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        }
    }

    return totalValue;
}

int main() {
    int capacity = 50;
    Item items[] = {
        {10, 60, 0}, {20, 100, 0}, {30, 120, 0}
    };
    int n = sizeof(items) / sizeof(items[0]);

    for (int i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    printf("Greedy Approach: Maximum Value = %d\n", knapsackGreedy(items, n, capacity));

    return 0;
}

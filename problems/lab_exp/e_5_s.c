#include <stdio.h>

#define MAX 20

int set[MAX], subset[MAX], n, target_sum;

void sumOfSubsets(int sum, int index, int subsetIndex) {
    if (sum == target_sum) {
        printf("Subset: ");
        for (int i = 0; i < subsetIndex; i++) {
            printf("%d ", subset[i]);
        }
        printf("\n");
        return;
    }

    if (index >= n || sum > target_sum) {
        return;
    }

    // Include the current element in the subset
    subset[subsetIndex] = set[index];
    sumOfSubsets(sum + set[index], index + 1, subsetIndex + 1);

    // Exclude the current element from the subset
    sumOfSubsets(sum, index + 1, subsetIndex);
}

int main() {
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    printf("Subsets with the target sum:\n");
    sumOfSubsets(0, 0, 0);

    return 0;
}

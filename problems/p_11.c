#include <stdio.h>

void printDistinctElements(int arr[], int n) {
    int isDistinct;

    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        isDistinct = 1;  // Assume the element is distinct

        // Check if this element has already appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;  // If element is found earlier, it's not distinct
                break;
            }
        }

        // If the element is distinct, print it
        if (isDistinct) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input: Elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print distinct elements
    printf("Distinct elements in the array are:\n");
    printDistinctElements(arr, n);

    return 0;
}
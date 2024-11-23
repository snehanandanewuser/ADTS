#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void interchangeSecondBiggestAndSmallest(int arr[], int n) {
    // Sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j] using pointer
                swap(&arr[i], &arr[j]);
            }
        }
    }
    
    // Swap second smallest (index 1) and second largest (index n-2)
    swap(&arr[1], &arr[n-2]);
}

int main() {
    int n;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array with size n

    // Input: Elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to interchange second biggest and second smallest
    interchangeSecondBiggestAndSmallest(arr, n);

    // Output: Array after interchanging
    printf("Array after interchanging second biggest and second smallest elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

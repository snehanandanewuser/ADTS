#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int result[n];
    int left = 0, right = n - 1;
    int index = 0;

    // Traverse the array and arrange in max-min order
    while (left <= right) {
        // Place the largest element
        if (left <= right) {
            result[index++] = arr[right--];
        }
        
        // Place the smallest element
        if (left <= right) {
            result[index++] = arr[left++];
        }
    }

    // Copy the result back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
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

    // Sort the array to use two-pointer technique
    // Sort the array in non-decreasing order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Rearrange the array in max-min form
    rearrangeArray(arr, n);

    // Output: The rearranged array
    printf("Array in max-min form:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

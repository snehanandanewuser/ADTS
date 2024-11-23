#include <stdio.h>

int linearSearch(float arr[], int n, float key) {
    // Linear search algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n;
    float key;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n]; // Declare an array of size n

    // Input: Elements of the array
    printf("Enter %d elements (integers or real numbers):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Input: The number to search for
    printf("Enter the number to search for: ");
    scanf("%f", &key);

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Output: Report success or failure
    if (result != -1) {
        printf("Success: Number %.2f found at index %d.\n", key, result);
    } else {
        printf("Failure: Number %.2f not found.\n", key);
    }

    return 0;
}

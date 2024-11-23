#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int count = 0;  // Keeps track of the index for non-zero elements

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeroes
    while (count < n) {
        arr[count++] = 0;
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

    // Move zeroes to the end
    moveZeroesToEnd(arr, n);

    // Output: The array after moving zeroes to the end
    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

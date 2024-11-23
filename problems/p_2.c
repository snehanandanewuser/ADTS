#include <stdio.h>

#define MAX_SIZE 100 // Define a maximum size for the array

void insertElement(int arr[], int n, int i, int element) {
    // Shift elements to the right to make space for the new element
    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = element; // Insert the new element
}

void deleteElement(int arr[], int n, int j) {
    if (j < 0 || j >= n) {
        printf("Index out of bounds.\n");
        return;
    }
    // Shift elements to the left to fill the gap
    for (int k = j; k < n - 1; k++) {
        arr[k] = arr[k + 1];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5; // Number of elements in the array
    int a1[MAX_SIZE]; // Declare an array with a maximum size

    // Initialize the array with some values
    for (int i = 0; i < n; i++) {
        a1[i] = i + 1; // Example: {1, 2, 3, 4, 5}
    }

    printf("Original array: ");
    printArray(a1, n);

    // Insert an element
    int i = 2; // Position to insert the new element
    int elementToInsert = 99; // Element to insert
    insertElement(a1, n, i, elementToInsert);
    n++; // Increase the size of the array after insertion
    printf("Array after insertion: ");
    printArray(a1, n);

    // Delete an element
    int j = 3; // Position to delete the element
    deleteElement(a1, n, j);
    n--; // Decrease the size of the array after deletion
    printf("Array after deletion: ");
    printArray(a1, n);

    return 0;
}
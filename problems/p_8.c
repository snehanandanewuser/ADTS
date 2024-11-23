#include <stdio.h>

void findLargestThreeDistinct(int arr[], int n) {
    int largest = -1, secondLargest = -1, thirdLargest = -1;

    // Traverse the array to find the largest three distinct elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] != secondLargest && arr[i] != largest) {
            thirdLargest = arr[i];
        }
    }

    // Output: The three largest distinct elements
    if (thirdLargest != -1) {
        printf("The three largest distinct elements are: %d, %d, %d\n", largest, secondLargest, thirdLargest);
    } else {
        printf("There are less than three distinct elements in the array.\n");
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

    // Find the largest three distinct elements
    findLargestThreeDistinct(arr, n);

    return 0;
}

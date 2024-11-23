#include <stdio.h>
int find_smallest_missing(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    if (arr[low] > 0) {
        return 0;
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    
    return low;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = find_smallest_missing(arr, n);
    printf("Smallest missing element is: %d\n", missing);

    return 0;
}

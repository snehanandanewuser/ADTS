#include <stdio.h>
int find_rotations(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        if (arr[low] <= arr[high]) {
            return low;
        }

        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;   
        int prev = (mid - 1 + n) % n; 

        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
            return mid;
        }

        if (arr[mid] >= arr[low]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int rotations = find_rotations(arr, n);
    printf("Number of rotations: %d\n", rotations);

    return 0;
}

#include <stdio.h>

int find_first_occurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int first_index = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            first_index = mid; 
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    
    return first_index;
}

int find_last_occurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int last_index = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            last_index = mid; 
            low = mid + 1; 
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    
    return last_index;
}

int count_occurrences(int arr[], int n, int target) {
    int first = find_first_occurrence(arr, n, target);
    int last = find_last_occurrence(arr, n, target);

    if (first == -1) {
        return 0;
    }

    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2; 

    int count = count_occurrences(arr, n, target);
    printf("Count of %d in the array: %d\n", target, count);

    return 0;
}

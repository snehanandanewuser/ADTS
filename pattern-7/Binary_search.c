#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, result;
    printf("Enter the value to search for: ");
    scanf("%d", &target);
    result = binarySearch(arr, size, target);
    if (result != -1) 
    {
        printf("Element found at index %d\n", result);
    } 
    else 
    {
        printf("Element not found in the array\n");
    }
    return 0;
}

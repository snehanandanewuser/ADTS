#include <stdio.h>
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1; 
} 
int main() {
    int arr[] = {3, 6, 12, 15, 23, 34, 48, 59, 72};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, result;
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

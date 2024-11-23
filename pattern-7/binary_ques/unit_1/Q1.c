#include <stdio.h>

int sum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int arr[] = {11, 2, 3, 5, 10};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int s = sum(arr, n);  
    printf("Sum of array elements: %d\n", s);  
    return 0;
}

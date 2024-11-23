#include <stdio.h>

int sum_array(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sum_array(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum: %d\n", sum_array(arr, n));
    return 0;
}

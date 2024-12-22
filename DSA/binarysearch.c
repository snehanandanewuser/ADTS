#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
   int low, mid, high;
   low = 0;
   high = size - 1;
   
   while(low<=high){
    mid = (low + high) / 2;
    if(arr[mid]==element){
        return mid;
    }

    if(arr[mid]<element){
        low = mid + 1;
    }

    else{
        high = mid -1;
    }

   }
   return -1;
}

int main()
{
    int arr[] = {1,8,9,3,2,10,4};
    int size = sizeof(arr)/sizeof(int);
    int element = 10;
    int searchIndex = binarySearch(arr, size, element);
    printf(" THE ELEMENT %d IS FOUND AT INDEX %d", element, searchIndex);
    
    return 0;
}
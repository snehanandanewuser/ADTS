#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for(int i=0; i< size; i++){
        if(arr[i] == element){
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,8,9,3,2,10,4};
    int size = sizeof(arr)/sizeof(int);
    int element = 10;
    int searchIndex = linearSearch(arr, size, element);
    printf(" THE ELEMENT %d IS FOUND AT INDEX %d", element, searchIndex);
    
    return 0;
}
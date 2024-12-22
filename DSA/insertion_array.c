#include<stdio.h>
 
void display(int arr[], int n)
{
    for(int i = 0; i <= n; i++ ){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index, int flag)
{
    if(size>=capacity){
        return -1;
    }
    
    for(int i= size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = element;
    return 1;
    
    flag = 1;

}

int main()
{
    int arr[100] = {1,2,4,5};
    int size = 4;
    int element = 3;
    int index = 2;
    display(arr,size);
    int flag = 0;
    indInsertion(arr , size, element, 100, index, flag);
    size = size + 1;
    display(arr,size);
    if(flag=1){
        printf("the insertion is successfull");
    }
    else{
        printf("the insertion is not successfull");
    }
    
    return 0;
}
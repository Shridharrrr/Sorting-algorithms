#include <stdio.h>
void inputarray(int array[],int size){
    for(int i = 0; i < size; i++){
    printf("Enter %d element of array : ",i+1);
    scanf("%d",&array[i]);
    }
}
void outputarray(int array[],int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];
    inputarray(arr,size);
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j=i-1;
        while(arr[j] > key && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("Array after sorting is : ");
    outputarray(arr,size);
    return 0;
}

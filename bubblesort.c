#include<stdio.h>
#include<stdbool.h>
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
    printf("Enter size of array : ");
    scanf("%d",&size);
//test
    int arr[size];
    inputarray(arr,size);
    bool flag = false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
            int tempt = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tempt;
            flag = true;
            }
        } 
        if(flag==false)break; 
    }   
    
    printf("Array after sorting is : ");
    outputarray(arr,size);
return 0;
}    

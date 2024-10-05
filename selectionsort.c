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
    
    int arr[size];
    inputarray(arr,size);
    bool flag = false;
    for(int i=0;i<size;i++){
    int min = arr[i],mindx = i;
        for(int j=i;j<size-1;j++){
        if(min>arr[j+1]){
        min = arr[j+1];
        mindx = j+1;
        flag = true;
        }
        }
        if(flag==false)break;
    int tempt = arr[mindx];
    arr[mindx] = arr[i];    
    arr[i] = tempt;
    }
    
    printf("Array after sorting is : ");
    outputarray(arr,size);
return 0;
}    
    

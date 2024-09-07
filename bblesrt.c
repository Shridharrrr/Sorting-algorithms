#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i=0;i<n;i++){
    printf("Enter %d num : ",i+1);
    scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int tempt = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tempt;
            }
        }  
    }   
    
    printf("Sorted array : ");
    for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
    }
return 0;
}    
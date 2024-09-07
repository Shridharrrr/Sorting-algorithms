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
    int min = arr[i],mindx = i;
        for(int j=i;j<n;j++){
        if(min>arr[j]){
        min = arr[j];
        mindx = j;
        }
        }
    int tempt = arr[mindx];
    arr[mindx] = arr[i];    
    arr[i] = tempt;
    }
    
    printf("Sorted array : ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
return 0;
}    
    
        
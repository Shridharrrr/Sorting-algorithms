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
    int max = arr[i],maxdx = i;
        for(int j=i;j<n;j++){
        if(max<arr[j]){
        max = arr[j];
        maxdx = j;
        }
        }
        
    int tempt = arr[maxdx];
    arr[maxdx] = arr[i];    
    arr[i] = tempt;
    }
    
    printf("Sorted array : ");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
return 0;
}    
    
        
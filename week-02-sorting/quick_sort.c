#include<stdio.h>
int partition(int arr[], int lb,int ub){
    int pivot = arr[lb];
    int i=lb, j=ub, temp;
    while(i<j){
        while(i<ub&&arr[i]<=pivot){
            i++;
        }
        while(j>lb&&arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    }
    // place pivot at correct position
    temp = arr[j];
    arr[j] = arr[lb];
    arr[lb] = temp;
    // for(int i=0;i<=ub;i++){
    //         printf("%d ",arr[i]);
    // }
    return j; // return pivot's final index
}
void quickSort(int arr[],int lb,int ub){
    // base condition
    if(lb<ub){
        // Partition and get pivot index
        int pivotidx = partition(arr,lb,ub);
        // Recurse on left subarray
        quickSort(arr, lb,pivotidx-1);
        // Recurse on right subarray
        quickSort(arr, pivotidx+1,ub);
    }
}

int main(){
    int arr[] = {61,59,37,48,75};
    int N = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,N-1);
    for(int i=0;i<N;i++){
             printf("%d ",arr[i]);
    }
    return 0;
}
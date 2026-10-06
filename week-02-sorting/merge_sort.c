#include<stdio.h>
void merge(int arr[], int lb, int mid, int ub){
    int i=lb,j=mid+1,k=0;
    int b[ub-lb+1];
    while(i<=mid&&j<=ub){
        if (arr[i]<arr[j]){
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    // shift remaining elements
    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ub){
        b[k] = arr[j];
        j++;
        k++;
    }
    // copy b to arr
    for(int i=0;i<k;i++){
        arr[lb+i] = b[i];
    }
}

void merge_sort(int arr[], int lb, int ub){
    if (lb<ub){
        int mid = (lb+ub)/2;
        merge_sort(arr, lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int arr[] ={4,10,3,222,32,4,2,24};
    int N = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,N-1);
    printf("After sort: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

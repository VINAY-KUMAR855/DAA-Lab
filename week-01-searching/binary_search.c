#include<stdio.h>
void binary_search(int arr[], int N, int key){
    int mid,low=0,high=N-1;
    int c=0;
    while(low<=high){
        mid = (low+high)/2;
        if (arr[mid]==key){
            printf("%d found at index %d.\n",key,mid);
            c++;
            break;
        }
        else if(key<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(c==0){
        printf("%d not found.\n",key);
    }

}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    int N= sizeof(arr)/sizeof(arr[0]);
    binary_search(arr,N,7);
}

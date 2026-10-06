#include<stdio.h>
void linear_search(int arr[],int N,int key){
    int c=0;
    for(int i=0;i<N;i++){
        if(arr[i]==key){
            printf("%d found at %d index.\n",key,i);
            c++;
            break;
        }
    }
    if(c==0){
        printf("%d not found.\n",key);
    }
}
int main(){
    int arr[] = {10,12,29,42,43,100,32};
    int N = sizeof(arr)/sizeof(arr[0]);
    linear_search(arr,N,10);
}
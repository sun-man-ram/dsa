#include<stdio.h>

int main(){

    int arr[]={6,3,8,1,45,23,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
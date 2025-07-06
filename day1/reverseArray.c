#include<stdio.h>
void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
   }
}

int main(){
    int arr[]={3,1,4,6,5};
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}

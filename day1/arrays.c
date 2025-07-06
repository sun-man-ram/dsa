#include<stdio.h>

void smallArray(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d is the smallest number in the array\n",min);
}

void largestNumber(int arr[],int size){
    int mx=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    printf("%d is the maximum nmber in array",mx);
}

int main(){
   int arr[]={5,3,7,1,9,23};
    smallArray(arr,6);
    largestNumber(arr,6);


    return 0;
}
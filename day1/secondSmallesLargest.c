#include<stdio.h>
#include<limits.h>
// simple bubble sort then second index in the beginning and last second index at the end

void secondSmallestLargest(int arr[],int size){

      for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
}}
        
      }

      for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
      }
}

int main(){
  int arr[]={3,2,6,4,8,3,9,32,57,234,753,45,23,9};
  secondSmallestLargest(arr,14);
  

    return 0;
}
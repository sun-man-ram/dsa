#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int partition(int arr[],int lb,int ub){
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}

void QuickSort(int arr[],int lb,int ub){

    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
       QuickSort(arr,lb,loc-1);
       QuickSort(arr,loc+1,ub);
    }
}



int main(){
    int arr[]={3,1,4,2,5,6,4,8,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

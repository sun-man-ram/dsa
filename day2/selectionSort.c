#include<stdio.h>

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[],int size){
    int minIndex=0;
    for(int i=0;i<size-1;i++){
        minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(&arr[minIndex],&arr[i]);
    }
}



int main()
{

    int arr[]={4,2,6,11,7,3};
    selectionSort(arr,6);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
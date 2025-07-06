#include<stdio.h>


void merge(int arr[],int p,int q,int r){

    // copy the two array parts to be sorted 
    // to find we need to size of arrays hence first we find the size of array
    int n1=q-p+1;
    int n2=r-q;
    int L[n1];
    int M[n2];
    // then we copy the arays 
    for(int i=0;i<n1;i++){
        L[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        M[j]=arr[q+1+j];
    }
    int i,j,k;
    i=0;
    j=0;
    k=p;

    // as we got the two sub arrays we try to sort them out 
    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }
    // the remaining part will be copied up by this process
    
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=M[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}


int main(){
    int arr[]={6,5,12,10,9,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    printArray(arr,size);

    return 0;
}

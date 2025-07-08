#include<stdio.h>
#include<stdlib.h>

// front end enqueue dequeue isfull isempty 
#define size 5
int arr[size];
int front=-1;
int rear=-1;

int isfull(){
    if(rear==size-1){
        return 1;
    }
    return 0;
}

int isempty(){
    if((front==-1)||front>rear){
        return 1;
    }
    return 0;
}


void enqueue(int data){

    if(isfull()){
        printf("queue is full");
        return;
    }
    else if (front==-1&&rear==-1){
        front++;
        rear++;
        arr[front]=data;

    }
    else{
        arr[++rear]=data;
    }

}

void dequeue(){

    if(isempty()){
        printf("your queue is empyt");
        return;
    }
    if(front==rear){
        printf("eleemnt removed is %d\n",arr[front]);
        front=-1;
        rear=-1;
    }else{
        printf("eleemnt removed is %d\n",arr[front]);
        front++;
    }


}

    void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
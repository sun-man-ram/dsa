#include<stdio.h>

// operations isfull isempty push pop peek

#define N 5
int stack[N];
int top=-1;
int isfull(){
    if(top==N-1){
        return 1;
    }
    return 0;
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int value){
    if(isfull()){
        printf("stack is full");
        return;
    }
    stack[++top]=value;

}
void pop(){
    if(isempty()){
        printf("stack is empty");
        return;
    }
    printf("top elemnt of stack is %d",stack[top]);
    top--;
}
void peek(){
    if(isempty()){
        printf("stack is empty");
}
    else{
        printf("%d is the top element ",stack[top]);
    }
}
void display(){

    for(int i =0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
}
int main(){ 
    push(5);
    push(3);
    push(6);
    push(1);
    display();
    pop();
    display();



    return 0;
}
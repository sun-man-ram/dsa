#include<stdio.h>
#include<stdlib.h>

void main(){
    int x=10;
    int *ptr;
    int y=20;
    int *ptr1;
    ptr=&x;
    ptr1=&y;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",x);
    printf("%p\n",&x);
    int sum=*ptr+*ptr1;
    printf("%d\n",sum);
}
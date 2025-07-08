#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node *head=NULL;

void insertAtBeginning(int data){
  struct node *newNode=(struct node *)malloc(sizeof(struct node));
  newNode->data=data;
  if(head==NULL){
   head=newNode;
   newNode->next=NULL;
   return;
  }
  newNode->next=head;
  head=newNode;
  return;
}

void insertAtEnding(int data){
  struct node * newNode=(struct node *)malloc(sizeof(struct node));
  newNode->data=data;
  if(head==NULL){
    newNode->next=NULL;
    head=newNode;
    return;
  }
  struct node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->next=NULL;
}


void insertAtPoisition(int data,int position){
 struct node *newNode=(struct node *)malloc(sizeof(struct node));
 newNode->data=data;
 struct node *temp=head;
 if(position==1){
  newNode->next=head;
  head=newNode;
  return;
 }
 int curr_positon=1;
 while(temp!=NULL&&curr_positon<position-1){
  temp=temp->next;
  curr_positon++;
 }
 if(temp==NULL){
  printf("invalid position");
  free(newNode);
  return;
 }
 newNode->next=temp->next;
 temp->next=newNode;
 return;
}



void deleteAtPosition(int position){
  // empty node 
  // delete at beginning
  // delete at specific position

  if(head==NULL){
   printf("list is empty ");
   return;
  }
  struct node *temp=head;
  if(position==1){
    head=head->next;
    free(temp);
    return;
  }
  int curr_position=1;
  while(temp!=NULL&&curr_position<position-1){
    temp=temp->next;
    curr_position++;
  }
  if(temp==NULL ||temp->next==NULL){
    printf("Invalid position");
    return;
  }
  struct node *toDelete=temp->next;
  temp->next=toDelete->next;
  free(toDelete);
}




void printArray(){
  struct node *temp=head;
  while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}
int main(){
  // drivers code 
  insertAtBeginning(5);
  insertAtEnding(10);
  insertAtPoisition(3,2);
  deleteAtPosition(2);
  printArray();
  return 0;
}
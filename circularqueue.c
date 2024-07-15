#include<stdio.h>
int front=-1;
int rear=-1;

         
void enque(int x,int n, int queue[]){
    if((rear+1)%n=front){
        printf("Overflow");
    }else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }else {
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}

void dequeue(int n,int queue[]){
    if(front==-1 && rear==-1){
        printf("Overflow");
    }else if(front==rear){
        front=rear=-1;
    }else{
        front=(front+1)%n;
    }
}
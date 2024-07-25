#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1;
int deque[size];
void insert_front(int x){
    if((rear==size-1 && front==0)  || (front=rear+1)){
        printf("Overflow");
    }else if(front==-1 && rear==-1){
        front=rear=0;
        deque[front]=x;
    }else if(front==0){
        front=size-1;
        deque[front]=x;
    }else{
        front=front-1;
        deque[front]=x;
    }
}

void insert_rear(int x){
    if((front==0 && rear==size-1) || (front==rear+1 )){
        printf("Overflow");
    }else if(front==-1 && rear==-1){
        rear==0;
        deque[rear]=x;
    }else if(rear==size-1){
        deque[rear]=x;
    }else{
        rear++;
        deque[rear]=x;
    }
}

void display(){
    int i=front;
    printf("Elements in queue are:");
     while(i!=rear)    
    {    
        printf("%d\t",deque[i]);    
        i=(i+1)%size;    
    }    
     printf("%d",deque[rear]);    
}    

void getfront(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }else{
        printf("\nThe value of front element is :%d\n",deque[front]);
    }
}

void getrear(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }else{
        printf("The value of rear element is :%d\n",deque[rear]);
    }
}

void delete_front(){
     if(front==-1 && rear==-1){
        printf("Queue is empty\n");
}else if(front==rear){
    printf("Deleted element is:%d\n",deque[front]);
    front==-1;
    rear==-1;
}else if(front==(size-1)){
    printf("The deleted element is: %d\n",deque[front]);
    front=0;
}else {
    printf("The deleted element is: %d\n",deque[front]);
    front=front+1;
}
}

void delete_rear(){
     if(front==-1 && rear==-1){
        printf("Queue is empty\n");
}else if(front==rear){
    printf("Deleted element is:%d\n",deque[front]);
    front==-1;
    rear==-1;
}else if(rear==(size-1)){
    printf("The deleted element is: %d\n",deque[rear]);
    rear=0;
}else {
    printf("The deleted element is: %d\n",deque[rear]);
    rear=rear-1;
}
}
   


int main(){
 
    insert_front(20);    
    insert_front(10);    
    insert_rear(30);    
    insert_rear(50);    
    insert_rear(80);    
    display();     
    getfront();    
    getrear();     
    delete_front();    
    delete_rear();    
    display(); 
    return 0;
}


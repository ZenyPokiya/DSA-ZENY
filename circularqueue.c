#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1;
int rear=-1;
int queue[size];
         
void enque(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
     }else if((rear+1)%size==front){
        printf("Overflow");
     
    }else {
        rear=(rear+1)%size;
        queue[rear]=x;
    }
}

void deque(){
 if(front==-1 && rear==-1){
       printf("Queue is empty");
}else if(front==rear){
    printf("\nThe dequeued element is %d",queue[front]);
    front=rear=-1;
}else{
    printf("\nThe dequeued element is %d",queue[front]);
    front=(front+1)%size;
}
}


void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%size;  
        }  
    }  
}  

int main(){
    int n=5;
    int queue[n];
    enque(10);
    enque(20);
    enque(-1);
    enque(30);
    display();
    deque();
    display();
    return 0;
}

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

void dequeue(int queue[]){
 if(front==-1 && rear==-1){
       printf("Overflow");
}else if(front==rear){
    front=rear=-1;
}else{
    printf("%d\n",queue[front]);
    front++;
}
}
void display(int queue[]){
    if(front==-1 && rear==-1){
        printf("Data not found");
    }else{
        for(int i=front;i<rear+1;i++){
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int size=6;
    int queue[n];
}
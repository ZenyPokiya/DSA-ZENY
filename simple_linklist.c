#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*head=NULL;

void insert_end(int val){
    struct node*ptr=head;
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        return ;
    }

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    return ;
}
void delete_end(){
    struct node*ptr=head;
    struct node*p;

    if(head->next==NULL){
        head=NULL;
        free(ptr);
        return;
    }while(ptr->next!=NULL){
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return ;
}

void insert_first(int val){
    struct node*ptr=head;
    struct node*temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;
}

void delete_first(){
    struct node*ptr=head;
    head=ptr->next;
    free(ptr);
}

void insert_mid(int num,int pos){
    struct node*ptr=head;
    struct node*p;
    struct node*temp=malloc(sizeof(struct node));
    temp->data=num;
    while(ptr->data!=pos){
        p=ptr;
        ptr=ptr->next;
    }
    p->next=temp;
    temp->next=ptr;
}

void delete_mid(int pos){
    struct node*ptr=head;
    struct node*p;

    while(ptr->data!=pos){
        p=ptr;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
}



void display(){
    struct node*ptr=head;
    if(head==NULL){
        printf("The list is already empty");
    }else{
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
    printf("\n\n");
}

int main(){
    int n;
    int pos;
    do{
        printf("1. Insert End");
        printf("\n2. Delete End");
        printf("\n3. Insert First");
        printf("\n4. Delete First");
        printf("\n5. Insert Mid");
        printf("\n6. Insert Mid");
        printf("\n7. Display");

        printf("\n\nEnter Your Choice:");
        scanf("%d",&n);

        if(n<=0 || n>7){
            printf("\n Invalid Input");
        }
        if(n==1){
            int num;
            printf("Enter the number you want to add at end in the list:");
            scanf("%d",&num);
            insert_end(num);
        }else if(n==2){
            delete_end();
        }else if(n==3){
            int num;
            printf("Enter the number you want to add first in the list:");
            scanf("%d",&num);
            insert_first(num);
        }else if(n==4){
            delete_first();
        }else if(n==5){
            int num;
            printf("Enter the position you want to add your new number:");
            scanf("%d",&pos);
            display();
            printf("Enter the number you want to add at mid to in the list:");
            scanf("%d",&num);
            insert_mid(num,pos);
            display();
        }else if(n==6){
            printf("Enter the position you want to delete your data:");
            scanf("%d",&pos);
            delete_mid(pos);
            display();
        }else if(n==7){
            display();
        }
    }while (n>0 || n<=7);
}
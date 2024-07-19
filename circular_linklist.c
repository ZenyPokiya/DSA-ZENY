#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

    struct node*head=NULL;
    struct node*tail=NULL;

void insert_end(int num){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=head;

    if(head==NULL && tail==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    tail->next=temp;
    tail=temp;
}

void insert_first(int num){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=head;
    head=temp;
    tail->next=head;
}

void delete_end(){
    struct node*ptr=tail;
    struct node*p=head;
    if(head==NULL){
        printf("\n\n This list is empty");
    }
    if(head=tail){
        head=tail=NULL;
        return ;
    }
    while(p->next!=tail){
        p=p->next;
    }
    p->next=head;
    tail=p;
    free(ptr);
}

void delete_first(){
    if(head==NULL){
        printf("\n\n This list is empty");
    }
    if(head==tail){
        head=tail=NULL;
        return ;
    }
    struct node*ptr=head;
    head=head->next;
    tail->next=head;
    free(ptr);
}

void display()
{
    struct node *ptr = head;
    printf("\n");

    if (head == NULL)
    {
        printf("\n\n The List Alaready Empty!!");
    }
    else
    {
        while (ptr != tail)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d", ptr->data);
        printf("\n");
    }
}


int main(){
    int n,pos;
    do{
        printf("\n 1. Insert End");
        printf("\n 2. Delete End");
        printf("\n 3. Insert First");
        printf("\n 4. Delete First");
        printf("\n 5. Display ");        
        printf("\n 6. Enter you choice:");
        scanf("%d",&n);    
        if(n<0 || n>7){
            printf("INVALID INPUT");
        }   
        if(n==1){
            int num;
            printf("Enter number you want to add:");
            scanf("%d",&num);
            insert_end(num);
        } 
        else if (n == 2)
        {
            delete_end();
        }
        else if (n == 3)
        {
            int num;

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            insert_first(num);
        }

        else if (n == 4)
        {
            delete_first();
        }
        else if (n == 5)
        {
            display();
        }

    } while (n > 0 || n <= 7);
}




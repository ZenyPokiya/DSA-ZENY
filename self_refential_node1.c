#include<stdio.h>

struct node{
    int data;
    char ch;
    struct node *ptr;
};

int main(){
    struct node a, b,c,d;
    a.data = 60;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 70;
    b.ch = 'B';
    b.ptr = NULL;

    c.data = 1000;
    c.ch = 'C';
    c.ptr = NULL;

    d.data = 240;
    d.ch = 'D';
    d.ptr = NULL;

    // printf("Data of a is: \n%d\t%c",a.data, a.ch);
    // printf("\n\nData of b is: \n%d\t%c",b.data, b.ch);
    // printf("\n\nData of c is: \n%d\t%c",c.data, c.ch);
    // printf("\n\nData of d is: \n%d\t%c",d.data, d.ch);
    
    a.ptr = &b;
    b.ptr = &c;
    c.ptr = &d;
    d.ptr = &a;
    printf("Data of a is: \n%d\t%c",d.ptr->data, d.ptr->ch);
    printf("Data of b is: \n%d\t%c",a.ptr->data, a.ptr->ch);
    printf("Data of c is: \n%d\t%c",b.ptr->data, b.ptr->ch);
    printf("Data of d is: \n%d\t%c",c.ptr->data, c.ptr->ch);
    return 0;
}
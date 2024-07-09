#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int TOP = -1;
void push()
{
    int x;
    printf("Enter value of stack [TOP]:");
    scanf("%d", &x);
    if (TOP == N - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        TOP++;
        stack[TOP] = x;
    }
};

void pop()
{
    int temp;

    if (TOP == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        temp = stack[TOP];
        printf("%d", temp);
        TOP--;
        
    }
};

void display()
{
    if (TOP == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        for (int i = 0; i <= TOP; i++)
        {
            printf("Value is:%d\n", stack[i]);
        }
    }
};
int main()
{
    int n;
    do{
        printf("\n1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter selected number:");
        scanf("%d",&n);

        switch(n){
            case 1:
            push();
            break;
             case 2:
            pop();
            break;
             case 3:
            display();
            break;
             case 4:
            printf("Exit");
            break;
            default:
            printf("ERROR!!");
        }
        }while(n!=4);
    return 0;
}
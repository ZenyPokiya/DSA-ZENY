#include <stdio.h>
#include <stdlib.h>
void search()
{
    int n ;
    int i;
    int j;

    printf("Enter size of array:");
    scanf("%d", &n);
    int temp;int min=i;
    int A[n];

    for (i = 0; i < n ; i++)
    {
        A[i] = (rand() % 50) + 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements are\n");
   for( i=0;i<n;i++){
    printf("%d\t",A[i]);
}
}
int main()
{
    search();
    return 0;
}
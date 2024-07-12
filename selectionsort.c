#include <stdio.h>
#include <stdlib.h>
void search()
{
    int n;
    int i;
    int j;

    printf("Enter size of array:");
    scanf("%d", &n);
    int temp;
    int A[n];

    for (i = 0; i < n - 1; i++)
    {
        A[i] = (rand() % 50) + 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    for (i = 0; i < n; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}
int main()
{
    search();
}
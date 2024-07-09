#include<stdio.h>
int main(){
    int total=0;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter elements of [%d] and [%d]:",i,j);
            scanf("%d",&arr[i][j]);
            }
         }
         for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
        total+=arr[i][j];
        }
        printf("\n");
    }
    printf("Total sum of all matrix elements is :%d",total);
return 0;
}
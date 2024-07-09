#include<stdio.h>
int main(){
    int total=0;
    int d=0,l=0,u=0;
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
        if(i==j){
            d+=arr[i][j];
        }else if(i>j){
            l+=arr[i][j];
        }else if (i<j){
            u+=arr[i][j];
    }else{
        printf("ERROR");
    }
    }
    printf("\n");
    }
    printf("\n");
    printf("Lower triangle sum of matrix is:%d \n",l);
    printf("Upper triangle sum of matrix is:%d \n",u);
    printf("Diagonal sum of matrix is:%d \n",d);
return 0;
}
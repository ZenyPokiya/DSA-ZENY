#include<stdio.h>
int main(){
    int k,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];

    
    for (int i=0;i<n;i++){
        printf("Enter elements of %d:",i);
        scanf("%d",&arr[i]);
 }
 for (int i=0;i<n;i++){
    printf("%d\t",arr[i]) ;
 }


    printf("\nEnter array size:");
    scanf("Enter array size:");
    scanf("%d",&k); 
    int xyz[k];
    for (int j=0;j<k;j++){
        printf("Enter elements of %d:",j);
        scanf("%d",&xyz[j]);
        }
        for (int j=0;j<k;j++){
        printf("%d\t",xyz[j]);
 }
 return 0;
}

#include<stdio.h>

int main(){
    int n;
    int eventotal=0;
    int oddtotal=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
     printf("Enter elements of %d:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
     printf("%d\t",arr[i]);
     
     if(arr[i]%2==0){
        printf("Sum of even position elements is :%d\t",eventotal);
     }else if(arr[i]%2!=0){
        printf("Sum of odd position elements is :%d\t",oddtotal);
     }
    }
    printf("\nSum of all elements is:%d\t",eventotal);
return 0;
}

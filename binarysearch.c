#include<stdio.h>
#include<stdlib.h>

int search(int arr[],int low ,int high,int x){
    while(low<=high){
        int mid=low+(high -low)/2;
    
    if(arr[mid]==x){
        return mid;
    }
    if (arr[mid]<x){
        low=mid+1;
    }else{
        high=mid-1;
    }
}
return -1;
};
int main(){
int arr[8]={12,23,34,45,56,67,78,89};
int result=search(arr,0,7,45);
if(result==-1){
printf("Result not found");
}else{
    printf("Element of mid is:%d",result);
}
return 0;
}
#include<stdio.h>
#include <stdlib.h>
void search(){
int n;int i;
int data;
printf("Enter size of array:");
scanf("%d",&n);

int a[n];
for( i=0;i<n;i++){
a[i]=(rand()%100)+1;
}
for( i=0;i<n;i++){
    printf("%d\t",a[i]);
}
printf("\nEnter choice :");
scanf("%d",&data);

for(i=0;i<n;i++){
if(a[i]==data){
    printf("Index no:%d",i);
    break;
}}

if(i==n){
    printf("\nElement not found");
}
}

int main(){
    search();
    return 0;
}

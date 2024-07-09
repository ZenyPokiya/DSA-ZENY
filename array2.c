#include<stdio.h>
int main(){
    int n;
    int total=0;
    float percent;int i;
    printf("Enter no. of students:");
    scanf("%d",&n);
    int arr[n];
    int sub[5];
    for (int i=0;i<n;i++){
        printf("\n Roll no.:");
        scanf("%d",&arr[i]);
        total=0;
   
   for(int j=0;j<5;j++){
    printf("Marks:");
    scanf("%d",&sub[j]);
    total+=sub[j];
   }
    percent=total/5;
    printf("Roll no.:%d\n",arr[i]);
    printf("Total marks of student is:%d\n",total);
    printf("Percentage of student is:%0.2f\n",percent);

    if(percent>=90 && 100>percent){
        printf("GRADE A");
    }else if(percent>=80 && 90>percent){
        printf("GRADE B");
    }else if(percent>=70 && 80>percent){
        printf("GRADE C");
    }else if(percent>=50  && 70>percent){
        printf("GRADE D");
    }else if(percent<=50  && 0<percent){
        printf("FAIL!!");
    }else{
        printf("EROR");
    }}
return 0;
}
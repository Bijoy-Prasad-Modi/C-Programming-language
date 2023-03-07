#include<stdio.h>

int Sumofarray (int *arr){
int sum=0;
for(int i =0 ;i<5 ; i++){
    sum+=arr[i];
}
return sum;

}

int main(){
    int arr[5];
    for(int i =0 ;i<5 ; i++){
        printf("Enter the element of array %d",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("sum of array element is %d",Sumofarray(arr));
    return 0;
}
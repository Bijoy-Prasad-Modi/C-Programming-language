#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("The value of sum of n Natural Number is %d",sum(n));
    return 0;
}
int sum(int n){
    if (n==0 || n==1)
    return 0;
    else 
    return n * (n-1) / 2;
}
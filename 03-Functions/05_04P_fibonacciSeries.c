#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    printf("the value of nth element of the fibonacci series id %d",fib(n));
    return 0;
}
int fib(int n){
    if (n==0 || n==1)
    return 0;
    else
    return (n-1) + (n-2);
}
#include<stdio.h>

int main(){
    int i=1, n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do{
        printf("the value of i is :%d\n",i);
        i++;
    }while(i<n);
    return 0;
} 
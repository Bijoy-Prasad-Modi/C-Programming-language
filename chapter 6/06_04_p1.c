#include<stdio.h>

int main(){
    int a=6, *ptr ;
    ptr = &a;
    printf("the address of variable a is %u\n",ptr);
    printf("the value of variable a is %d",*ptr);
    return 0;
}
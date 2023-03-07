#include<stdio.h>

void printadd( int a)
{
printf("the address of a is %u",&a);
}
int main(){
    int i = 6 ;
    printf("the address of i is %u\n",&i);
    printadd(i);
    return 0;
}
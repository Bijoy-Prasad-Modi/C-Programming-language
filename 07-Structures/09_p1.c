#include<stdio.h>
struct vector {
int a;
int b;
};
int main(){
    struct vector v1 ;
    v1.a = 6;
    v1.b = 7 ;
    printf("The two dimensional vetor is %d i + %d j",v1.a,v1.b);
    return 0;
}
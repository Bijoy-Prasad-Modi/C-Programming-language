#include<stdio.h>
typedef struct complex_Number {
int a;
int b;
}comp;
int main(){
    comp c1 ;
    c1.a = 6;
    c1.b = 7 ;
    printf("The Complex Number is : %d + i%d ",c1.a,c1.b);
    return 0;
}
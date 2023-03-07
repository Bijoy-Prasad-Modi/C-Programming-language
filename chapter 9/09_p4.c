#include<stdio.h>
struct complex_Number {
int a;
int b;
};
int main(){
    struct complex_Number c1 ;
    c1.a = 6;
    c1.b = 7 ;
    printf("The Complex Number is : %d + i%d ",c1.a,c1.b);
    return 0;
}
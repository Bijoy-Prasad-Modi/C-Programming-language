#include<stdio.h>

void multi(int a);
int main(){
    int i = 5;
    printf("the value of i variable before is %d\n",i);
    multi(i);
    printf("the value of i variable after is %d\n",i);

    return 0;
}
void multi(int a){

a*=10 ;
}
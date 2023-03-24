#include<stdio.h>

int sum(int a ,int b);

int sum(int a,int b){
    int result;
    
    result = a + b ;
    return result;
}
int main(){
    int c;
c = sum(  7 , 6);
printf("the valuen of c is %d",c);

    return 0;
}
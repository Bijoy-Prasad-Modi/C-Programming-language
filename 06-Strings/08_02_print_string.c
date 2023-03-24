#include<stdio.h>

int main(){
    // char str [] ={'B','i','j','a','y','\0'};
    char str [] = "Bijoy";
    char *ptr = str ;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr ++ ;
    }
    return 0;
}
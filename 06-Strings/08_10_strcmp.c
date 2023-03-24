#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hello";
    char *st2 = "Bijoy";
    int value = strcmp(st1, st2); 
    printf("Now the Value is %d",value);
    return 0;
}
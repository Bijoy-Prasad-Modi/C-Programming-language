#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hello";
    char *st2 = "Bijoy";
    strcat(st1, st2); // strcat function merges the content of variable in it without any sapce inbetween the contents of those varibal in the function
    printf("Now the st1 is %s",st1);
    return 0;
}
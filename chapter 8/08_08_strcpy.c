#include<stdio.h>
#include<string.h>
int main(){
    char *st = "This";
    char st2[45];
    strcpy(st2, st);//strcpy function is used to copy the content of second string into frist string and passed to it 
    printf("Now the st2 is %s",st2);
    return 0;
}
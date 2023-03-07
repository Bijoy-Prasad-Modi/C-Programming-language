#include<stdio.h>
#include<string.h>// the program can not be run with out including (#include<string.h>) library function
                  // as the program contains strlen funtion
int main(){
    char *st = "Bijoy";
    char a = strlen (st);
    printf("the length of string st is %d",a);
    return 0;
}
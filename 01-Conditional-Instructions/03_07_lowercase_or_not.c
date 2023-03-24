#include<stdio.h>

int main(){
    // 97-122 =a-z
    int chr;
    printf("enter the chr :\n");
    scanf("%c",& chr);
    if((chr>=97) && (chr<=122))
    {printf(" The Charecter is Lowercase");}
    else
    {printf("The character is Not Lowercase");}

    return 0;
}
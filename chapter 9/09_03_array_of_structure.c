#include<stdio.h>
#include<string.h>
struct employee {
    int code ;
    float salary ;
    char name [10];
};

int main(){
    struct employee facebook [100];
    facebook[0].code = 100 ;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name , "Bijoy");
    
    facebook[1].code = 101 ;
    facebook[1].salary = 120.45;
    strcpy(facebook[1].name , "Himesh");
    
    facebook[2].code = 102 ;
    facebook[2].salary = 115.45;
    strcpy(facebook[2].name , "Tushar");
    return 0;
}
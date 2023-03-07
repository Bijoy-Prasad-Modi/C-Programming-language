#include<stdio.h>
#include<string.h>
struct employee {
    int code ;
    float salary ;
    char name [10];
};

int main(){
    struct employee Bijoy = {100 , 100.55 , "Bijoy"};
    printf("code is %d :\n",Bijoy.code);
   printf("code is %f :\n",Bijoy.salary);
   printf("code is %s :\n", Bijoy.name);
   
    return 0;
}
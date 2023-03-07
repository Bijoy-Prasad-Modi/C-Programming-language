#include<stdio.h>
#include <string.h>
struct employee {
    int code ;
    float salary ;
    char name [10];
};

int main(){
    /*int a =6;
    char b = 'f';
    float c = 6.0 ;
   // employee e1 ;
   // e1.salary = 34.545 --> wont work without employee struct */
   struct employee e1 ;
   e1.code = 100;
   e1.salary = 34.545;
   //e1.name = "Bijoy";--> wont work
   strcpy(e1.name, "Bijoy");
   
   printf("%d\n",e1.code);
   printf("%f\n",e1.salary);
   printf("%s\n",e1.name);
    return 0;
}
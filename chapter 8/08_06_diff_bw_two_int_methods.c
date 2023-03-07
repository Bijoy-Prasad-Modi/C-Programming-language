#include<stdio.h>

int main(){
   char *ptr = "Bijoy Prasad Modi"; // if you initializa a char variablr with pointer (*) ,it can be reinitialize with another characters in it 
   //char ptr[] = "Bijoy Prasad Modi"; // if you initializa a char variablr with array[] which is actually = string ,it can not be reinitialize with another characters in it 
   ptr = "Ajay Prasad Modi";
   printf("%s",ptr);
    return 0;
}
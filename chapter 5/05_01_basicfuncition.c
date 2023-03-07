#include<stdio.h>

void display(); // Function Prototype
int main(){
    printf("Initializing Display Function\n");
   display(); //function Call
    printf("Display Fuction Finished its work\n");
    return 0;
}//Function Defination
void display(){
    printf("This is Display\n");
}
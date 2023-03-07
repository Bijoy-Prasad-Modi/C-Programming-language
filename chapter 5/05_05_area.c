#include<stdio.h>
int area(); // function prototype
int main(){
    int c;
    c = area(); //function call
    printf("the Area of A Triangle is %d",c);
    return 0;
}
 int area (){ //function defination
    int side = 4,result;
    result = side * side ;
    return result;

 }
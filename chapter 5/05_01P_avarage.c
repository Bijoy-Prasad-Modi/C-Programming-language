// #include<stdio.h>

// float avag();
// int main(){
//     int a,b,c;
//     printf("Enter the value of a , b, c :\n");
//     scanf("%d%d%d",a,b,c);
//     printf("the value of %f is",avag(a,b,c));
//     return 0;
// }
// float avag(int a,int b, int c){
    
//     float result;
//     result = (a+b+c)/3;
//     return result;
// }
#include<stdio.h>

float avg();
int main(){
    float x = avg();
     printf("the value of avarage is %f", x);
    return 0;
}
float avg(){
    float a,b,c;
    float result;
    printf("enter the value of a\n");
    scanf("%f",&a);
    printf("enter the value of b\n");
    scanf("%f",&b);
    printf("enter the value of c\n");
    scanf("%f",&c);
    result = (a+b+c)/3;
    return result;

}
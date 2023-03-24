#include<stdio.h>
float force(int mass);
int main(){
    int m;
    printf("enter the value of m :\n");
    scanf("%d",&m);
    printf("the value of force in newton is %f",force(m));
    return 0;
}
float force(int mass)
{ float result;
result = mass * 9.8;
return result;
}
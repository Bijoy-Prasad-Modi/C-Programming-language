#include<stdio.h>

int main(){
    int a, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for( a = n; a<100 ; a++)
    {printf("The value of A is %d\n",a);
    if (a==50)
    break;}
    return 0;
}
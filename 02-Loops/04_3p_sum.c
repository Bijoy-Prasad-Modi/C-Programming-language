#include<stdio.h>

int main(){
    int i=0,sum=0, n;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {sum +=i;
    i++;}
    printf("the value of sum(1 to 10) is %d\n",sum);
    return 0;
}
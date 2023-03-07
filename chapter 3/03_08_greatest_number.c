#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the three number a & b & c :\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b) && (a>c))
    {printf("%d is the greatest numbe",a);}
    else if ((b>a) && (b>c))
    {printf("\t%d is the greatest number ",b);}
    else 
    {printf("\t%d is the greatest number",c);
        }


    return 0;
}
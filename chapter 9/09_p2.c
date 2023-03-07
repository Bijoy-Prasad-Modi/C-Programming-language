#include<stdio.h>
typedef struct vector {
 int a ;
 int b ;
 int result;
}vec;
vec Sumvector (vec x , vec y){
 vec result ;
 result.a = x.a + y.a;
 result.b = x.b + y.b ;
 return result ;
 
 } 
int main(){
    vec v1 , v2 , sum ;
    printf("enter the value for v1.a \n");
    scanf("%d",&v1.a);
    printf("enter the value for v1.b \n");
    scanf("%d",&v1.b);
    printf("enter the value for v2.a \n");
    scanf("%d",&v2.a);
    printf("enter the value for v2.b \n");
    scanf("%d",&v2.b);
    
    sum = Sumvector (v1 , v2);
printf("the sum of two vector is %di + %dj",sum.a,sum.b);
    return 0;
}
/*#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
    int result;
} vec;

vec sumVector(vec v1, vec v2)
{
    vec result;
    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;
    return result;
}

int main()
{
    vec v1, v2, sum;
    v1.i = 5;
    v1.j = 2;
    v2.i = 7;
    v2.j = 9;
    // printf("%di + %dj", vec.i, vec.j);
    sum = sumVector(v1, v2);
    printf("%d\n", sum.i);
    printf("%d\n", sum.j);
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int i=1,sum=0;
    while(i<=10)
    {
       printf("8 x %d = %d\n",i,i*8);
       
       i++;

    }
    return 0;
}*/
#include<stdio.h>

int main(){
    int i=1,sum=0;
    while(i<=10)
    {
       sum = sum+8*i;
        i++;}
        printf("the value of multiplication table will be %d\n",sum);
    return 0;
}

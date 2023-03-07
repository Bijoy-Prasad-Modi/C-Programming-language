#include<stdio.h>
typedef struct Complex_Number {
    int a ;
    int b ;
}CN;

void Display(CN cnum , int c){
    
    printf("the value of complex Number %d is %d + i%d\n",c,cnum.a,cnum.b);   
}

int main(){
    CN cnum[5] ;
    int c = 0;
    for(int i = 0; i<5 ;i++){
        printf("Enter real value and imaginary value for complex Number %d : ",i+1);
        scanf("%d%d",&cnum[i].a,&cnum[i].b);
    }
    for(int i = 0; i<5 ;i++){
       c++;
        Display (cnum[i],c);
    }
    return 0;
}
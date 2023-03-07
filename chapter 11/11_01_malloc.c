#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr ;
   /* printf("the value of int on my pc is %d\n",sizeof(int));
    printf("the value of float on my pc is %d\n",sizeof(float));
    printf("the value of char on my pc is %d\n",sizeof(char)); */
    ptr = (int *)malloc(5 * (sizeof (int) ));
    for (int i=0 ; i<6 ; i++){
    printf("Enter the value of %d element :\n ", i);
    scanf("%d",&ptr[i]);}
    for (int i=0 ; i<6 ; i++){
        printf("the value of element %d is %d\n",i,ptr[i]);
    }
    return 0;
}
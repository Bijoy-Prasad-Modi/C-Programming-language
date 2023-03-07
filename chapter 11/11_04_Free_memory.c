#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1 , *ptr2 ;
    ptr1 = (int *)malloc(486 * (sizeof (int) ));
    for (int i=0 ; i<6 ; i++){
    ptr2 = (int *)malloc(64165 * (sizeof (int) ));
    printf("Enter the value of %d element :\n ", i);
    scanf("%d",&ptr2[i]);}
    for (int i=0 ; i<6 ; i++){
        printf("the value of element %d is %d\n",i,ptr2[i]);
        free(ptr2);
    }
    return 0;
}
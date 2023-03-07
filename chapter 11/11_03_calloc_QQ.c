#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr , n;
    printf("Type how many integers do you want to Enter : \n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,(sizeof (int) ));
    for (int i=0 ; i<n ; i++){
    printf("Enter the value of %d element :\n ", i);
    scanf("%d",&ptr[i]);}
    for (int i=0 ; i<n ; i++){
        printf("the value of element %d is %d\n",i,ptr[i]);
    }
    return 0;
}
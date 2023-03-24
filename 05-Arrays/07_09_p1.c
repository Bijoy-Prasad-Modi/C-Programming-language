/*#include<stdio.h>

int main(){
    int marks[10];
    int *ptr =& marks[0];
    printf("the address before is %u\n",ptr);
    ptr+=2;
    printf("the address after is %u\n",ptr);

    return 0;
}*/
#include<stdio.h>

int main(){
    int marks[10];
    int *ptr =& marks[0];
    ptr+=2;
    if(ptr == &marks[2]){
        printf("these points to the same location in memory\n");
    }
    else{
         printf("these do not points to the same location in memory\n");
    }

    return 0;
}
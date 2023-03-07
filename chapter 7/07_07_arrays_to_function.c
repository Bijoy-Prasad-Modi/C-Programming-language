#include<stdio.h>
/*void printarray(int *ptr, int n){
    for (int i=0;i<n;i++){
        printf("the value of %d is %d\n",i+1,*(ptr+i));
    }

}*/
void printarray(int ptr[], int n){
    for (int i=0 ; i<n ; i++ ){
        printf("the value of %d is %d\n",i+1,ptr[i]);
    }
    //ptr[2]=844; //this value will be change in main as well
     ptr[2];
    

}
  int main(){
    int jstanArray [] = {4,6,9,5,8,4,7};
    printarray(jstanArray, 7);
    printf("%d",jstanArray[2]);
    return 0;
}
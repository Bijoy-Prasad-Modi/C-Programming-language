/*#include<stdio.h>

int main(){
    int array[10];
    int i = 0;
    while(i<10){
        array[i] = 5*(i+1);
        i++;
    }
    i = 0;
    while(i<10){
        
        printf("5 * %d = %d\n",i+1,array[i]);
        i++;
    }

    return 0;
}
*/
#include<stdio.h>

int main(){
    int mul[10];
    
    for(int i=0;i<10;i++){
        mul[i] = 5*(i+1);
            }
            for(int i=0;i<10;i++){
        printf("5 X %d = %d\n",i+1,mul[i]);
            }
    return 0;
}
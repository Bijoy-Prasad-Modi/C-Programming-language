// #include<stdio.h>

// int main(){
//     int fact=1,n=5;
//     for(i=1 ;i<=n;i++){
//         fact *=i;}
//         printf("The value of Fatorial %d is %d\n",n,fact);

    
//     return 0;
// }
#include<stdio.h>

int main(){
    
    int fact=1,i=1,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(i<=n){
         fact*=i;
         i++;

    }
    printf("The value of natural number %d is %d",n,fact);
   
    
    return 0;
}
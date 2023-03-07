#include<stdio.h>
typedef struct bank_details{
    int a;      //a for account number 
    float b;    //b for balance
    char n[20]; //n for name
}BD;
int main(){
    BD customer;
    printf("Enter the name , account_number and balance of the customer : \n");
    gets(customer.n);
    scanf("%d%f",&customer.a,&customer.b);
    printf("Customer name is %s account number is %d and balance is %f",customer.n,customer.a,customer.b);
    return 0;
}
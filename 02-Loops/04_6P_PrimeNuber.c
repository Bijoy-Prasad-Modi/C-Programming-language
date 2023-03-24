// #include<stdio.h>

// int main(){
//     int n ,i;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     for(i=2 ;i<=n/2; i++)
//    { if (n%i==0)
//     {printf("The number %d is A prime Number",n);
//     break;}
//     else
//     {printf("The number %d is Not A prime Number",n);
//     break;}}
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int n,i=2;
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     do{
//        if(n%i==0)
//         {printf("The Entered Number %d isn't a Prime Number ",n);
//         break;}
//         else
//         {printf("The Entered Number %d is a Prime Number",n);
//         break;}
//         i++;
//     }while(i<=n/2);
//     return 0;
// }
#include<stdio.h>

int main(){
    int i=2, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i!=0)
        {printf("The entered Number %d is a Prime Number",n);
        break;}
        else
        {
            printf("The Entered Number %d is not a Prime Number",n);
            break;
        }
        i++;
    }
    return 0;
}

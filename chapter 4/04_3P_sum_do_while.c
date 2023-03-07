/*#include<stdio.h>

int main(){
    int i,sum=0,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do{
    sum +=i;
        i++;}
        while(i<=n);
        printf("The value of Entered Natural Numbers will be %d\n",sum);
    return 0;
   
*/
#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The value of Entered Natural Numbers will be %d\n", sum);
    return 0;
}
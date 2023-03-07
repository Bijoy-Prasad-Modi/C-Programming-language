// #include<stdio.h>

// int factorial(int x)
// {
// 	int f;
// 	if(x==0||x==1)
// 		return 1;
// 	else
// 		f=x * factorial(x-1);
// 	return f;
// }

// int main()
// {
// 	printf("%d",factorial(4));
// 	return 0;
// }
#include<stdio.h>

int factorial( int x);
int main(){
	int a;
	printf("enter the value of a :\n");
	scanf("%d",&a);
	printf(" The Factorial value of %d is %d",a,factorial(a));
	return 0;
}
int factorial(int x){
	if(x==0 || x==1)
	{return 1;}
	else
	{return x*factorial(x-1);}
}
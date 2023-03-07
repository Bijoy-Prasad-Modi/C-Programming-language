#include<stdio.h>
int main()
{
    int grade;
    printf("enter the grade :\n");
    scanf("%d",&grade);
    switch (grade)
    {
    case 90 :printf("you are pass");
    break;
    case 80 : printf("you are pass");
    break;
    case 70 : printf("you are pass");
    break;
    case 60 : printf("you are fail");
    break;
    }
}
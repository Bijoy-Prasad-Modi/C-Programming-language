#include<stdio.h>

int main(){
    int physics,maths,chemistry;
    float total;
    printf("Enter the mark of physics\n");
    scanf("%d",&physics);
   
    printf("Enter the mark of maths\n");
    scanf("%d",&maths);
    
    printf("Enter the mark of chemistry\n");
    scanf("%d",&chemistry);
   
    total = (physics + maths + chemistry)/3;
   
    if((total<40) || physics<33 || maths<33 || chemistry<33)
   {printf("your total percentage is %f ,Youn are fail",total);}
    else
    {printf("your total percentage is %f ,Youn are pass",total);}
    return 0;
}
#include<stdio.h>
struct sample {
    int roll_no ;
    float marks ;
    char name[20] ;
};
int main(){
    struct sample s[3];
    for (int i =0 ; i < 3 ; i++){
        printf("Enter the name for student %d :\n ",i+1) ;
        scanf("%s",&s[i].name);
        printf("Enter the Mark for student %d :\n ",i+1) ;
        scanf("%f",&s[i].marks);
    }
    for (int i =0 ; i < 3 ; i++){
        printf("The name of the student %d is %s and mark is %f\n",i+1,s[i].name,s[i].marks);      
    }

    return 0;
}
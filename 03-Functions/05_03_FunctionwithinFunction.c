#include<stdio.h>

void Goodmorning();
void Goodafternoon();
void Goodnight();
int main(){
    Goodmorning();
    return 0;
}
void Goodmorning(){
    printf("Good morning Bijoy, wake up\n");
    Goodafternoon();

}
void Goodafternoon(){
    printf("Good afternoon Bijoy , its Time For Your lunch\n");
    Goodnight();
}
void Goodnight(){
    printf("Good Night Bijoy ,Have a sweet dream\n");
}
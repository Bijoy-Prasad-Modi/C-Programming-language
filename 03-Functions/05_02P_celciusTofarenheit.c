// #include<stdio.h>

// float celcius();            //********For celcious to farenheit*********
// int main(){
//     float x;
//     x = celcius()+32;
//     printf("the value of celcius temperatur in Farenheit is %f",x);
//     return 0;
// }
// float celcius(){
//     float temp,result;
//     printf("Enter the celcious value of temp :\n");
//     scanf("%f",&temp);
//     result = temp * (9/5);
//     return result;
// }

#include<stdio.h>                   //********For farenheit to Celcious************

float farenheit();
int main(){
    float x;
    x = farenheit();
    printf("the value of farenheit temperatur in celcious is %f",x);
    return 0;
}
float farenheit(){
    float temp,result;
    printf("Enter the farenheit value of temp :\n");
    scanf("%f",&temp);
    result = (temp-32)*5/9 ;
    return result;
}


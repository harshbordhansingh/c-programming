#include<stdio.h>

float change(float a){
    float fr;
    fr = (a*9/5) + 32;
    return fr;
}

float main(){
    float temp;
    printf("Temparature in celcius: ");
    scanf("%f", &temp);
    printf("Temperature in farenheit will be: %f", change(temp));
    return 0;
}
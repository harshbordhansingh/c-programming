#include<stdio.h>

float cirarea(float a, float b){
    float pi = 3.14;
    float area;
    area = pi*a*a*b;
    return area;
}

float main(){
    float r, h;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);
    printf("The required area is %f", cirarea(r, h));
    return 0;
}
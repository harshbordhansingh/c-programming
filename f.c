#include<stdio.h>
int main()
{
    float c, f;
    printf("enter the farenheit temperature:");
    scanf("%d",&f);
    c = (f-32)/1.8;
    printf("%d farenheit is equal to %d celcius",f,c);
    return 0;
}
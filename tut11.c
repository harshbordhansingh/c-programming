#include <stdio.h>

void morning();
void evening();
void night();
float cirarea(float a, float b);

int main()
{

    morning();
    evening();
    night();

    float r, h;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);
    printf("The required area is %f", cirarea(r, h));

    return 0;
}

void morning()
{
    printf("Good morning!!!\n");
}

void evening()
{
    printf("Good evening!!!\n");
}

void night()
{
    printf("Good night!!!\n");
}

float cirarea(float a, float b)
{
    float pi = 3.14;
    float area;
    area = pi * a * a * b;
    return area;
}
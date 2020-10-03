// #include <stdio.h>

// void avg(int *a, int *b);

// int main()
// {
//     int a = 2, b = 3;
//     int *ptr = &a;
//     int *ptr1 = &b;
//     avg(ptr, ptr1);
//     return 0;
// }

// void avg(int *a, int *b)
// {
//     float sum = (*a) + (*b);
//     float avg = sum / 2;
//     printf("The sum of two numbers is %f\n", sum);
//     printf("The average of two numbers is %f\n", (float)avg);
// }

#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);

    return 0;
}
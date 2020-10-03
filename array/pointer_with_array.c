#include <stdio.h>

int main()
{
    int i = 34, j = 42;

    int *ptr = &i;
    int *ptr1 = &j;

    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    // printf(*ptr == *ptr1);

    return 0;
}
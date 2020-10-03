#include<stdio.h>

int main(){
    int i = 4;
    int *ptr = &i;
    int **ptr1 = &ptr;
    printf("The value of i is: %d\n", *(*(ptr1)));
    return 0;
}
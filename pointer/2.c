#include<stdio.h>

void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main(){
    int a=3, b=4;

    printf("\nWorking with call by value\n");
    printf("The value of a & b before swap %d and %d\n", a, b);
    wrong_swap(a, b);   // call by value did not work
    printf("The value of a & b after swap %d and %d\n", a, b);

    printf("\nWorking with call by reference\n");
    printf("The value of a & b before swap %d and %d\n", a, b);
    swap(&a, &b);   // call by reference will work
    printf("The value of a & b after swap %d and %d\n", a, b);

    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
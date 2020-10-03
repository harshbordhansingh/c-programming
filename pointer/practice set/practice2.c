#include<stdio.h>

void question(int a);

int main(){
    int i = 4;
    printf("The address of %d is %u\n", i, &i);
    question(i);
    return 0;
}

void question(int a){
    printf("The address of %d is %u\n", a, &a);
}
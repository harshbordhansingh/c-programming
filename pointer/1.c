#include<stdio.h>

int main(){
    int i = 4;
    int *j = &i;
    printf("The value of i Is %d\n", i);
    printf("The value of i Is %d\n", *j);
    printf("The address of i Is %u\n", &i);
    printf("The address of i Is %u\n", j);
    printf("The address of j Is %u\n", &j);
    printf("The value of j Is %u\n", *(&j));
    return 0;
}
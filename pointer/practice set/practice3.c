#include<stdio.h>

int increased(int a);

int main(){
    int a = 4;
    int *ptr = &a; 
    printf("The value of a before function call is %d\n", *(ptr));
    printf("The value after executing the function is: %d\n", increased(a));
    return 0;
}

int increased(int a){
    int sum = 10*a;
    return sum;
}
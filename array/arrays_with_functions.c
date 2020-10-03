#include<stdio.h>

void printarray(int *ptr, int a){
    for (int i = 0; i < a; i++)
    {
        printf("The marks of the student %d is: %d\n", i + 1, *(ptr + i));
    }
};

int main(){
    int arr[] = {21, 33, 45, 5544, 4554, 45455};
    printarray(arr, 6);
    return 0;
}
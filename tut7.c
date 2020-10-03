#include<stdio.h>
int main(){
    int i = 1, a;
    printf("Enter the number: ");
    scanf("%d", &a);
    // do{
    //     printf("%d\n", i);
    //     i++;
    // }while (i<=a);
    
    // for (int j = 1; j <= a; j++)
    // {
    //     printf("%d\n", j);
    // }
    
    // printf("In the reverse order is: \n");

    for (int j = a; j>=1; j--)
    {
        printf("%d\n", j);
    }

    return 0;
}
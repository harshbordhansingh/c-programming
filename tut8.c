#include<stdio.h>
int main(){
    int i, sum = 0, n=10;
    // printf("Enter the number: ");
    // scanf("%d", &a);
    // printf("Now presenting your multiplication table\n");
    // for (int i = a; i <= a; i++)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         printf("%d*%d = %d\n", i, j, i*j);
    //     }
        
    // }

    for ( i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    printf("%d\n", sum);

    return 0;
}
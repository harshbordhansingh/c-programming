#include<stdio.h>

int main(){
    int i, count = 0;
    for (int i = 0; i < 200; i++)
    {
        if (i%2==0)
        {
            printf("%d\n", i);
            count += 1;
        }
        
    }
    printf("The numbers printed %d time", count);
    return 0;
}
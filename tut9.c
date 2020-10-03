#include<stdio.h>

int main(){

    int n=5, f=1;
    for (int i = n; i > 0; i--)
    {
        f = f*i;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     f = f*i;
    // }

    printf("%d", f);
    return 0;
}
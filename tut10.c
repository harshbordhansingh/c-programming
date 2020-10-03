#include<stdio.h>

int main(){
    int n = 31, prime=0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime = 1;
            break;
        }
        
    }
    if(prime == 1){
        printf("This is not a prime number");
    }else
    {
        printf("This is a prime number");
    }
    
    
    return 0;
}
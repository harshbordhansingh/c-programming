#include<stdio.h>
int main()
{
    int i,j,k,num=1;
    printf("Enter the times you want to display numbers:\n");
    scanf("%d",&k);
    for ( i = 1; i <= k; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("\t%d",num);
            num++;
        }
        printf("\n\n");
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int l = -10, u = 10, result = 10, num, r, num1, score = 0;
    srand(time(0));
    printf("*******************************\n");
    printf("      Welcome To My Game\n");
    printf("******************************\n");
    printf("If you want to take the first option press 5\nelse press 6 to take the second one\n");
    printf("******************************\n");
    printf("The Game will end when you go below 0\nor above 21 and the game will start from 10.\n");
    printf("******************************\n");
    printf("      Now enjoy the game.\n");
    printf("******************************\n");
    while (1<2)
    {
        num = (rand() % (u - l + 1)) + l;
        printf("1. ");
        printf("%d\n", num);
        num1 = (rand() % (u - l + 1)) + l;
        printf("2. ");
        printf("%d", num1);
        printf("\nenter your input: ");
        scanf("%d", &r);
        if (r<5 || r>6)
        {
            printf("invalid input\n");
            continue;
        }
        
        if (r == 6)
        {
            result += num1;
            printf("\nYour number is: %d\n", result);
        }

        if (r != 6)
        {
            result += num;
            printf("\nYour number is: %d\n", result);
        }

        if (result>0 || result<21)
        {
            score += 10;
            printf("Your Score is: %d\n", score);
        }
        

        if (result<0 || result>21)
        {   
            score = score - 10;
            printf("Your Actual Score is: %d\n", score);
            printf("\nYou lose the game\n");
            printf("Better luck next time\n");
            break;
        }
 
    }
    return 0;
}
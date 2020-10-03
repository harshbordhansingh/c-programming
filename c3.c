#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void highscore(){
    int HighScore;
    FILE *f;
    f = fopen("highscore.txt", "r");
    fscanf(f, "%d", &HighScore);
    printf(HighScore);
    fclose(f);
}
int main()
{
    int l = -10, u = 10, result = 10, num, r, num1, score = 0;
    char d[50];
    srand(time(0));
    printf("\n  HEY LOSER,\n");
    printf("             WELCOME TO THE 'MATH OF LUCK'!!!\n\n");

    printf(">>>READ THE INSTRUCTIONS CAREFULLY BEFORE YOU PLAY :-----\n\n");

    printf(" *PRESS 1 TO SELECT 1ST OPTION.\n *PRESS 2 TO SELECT 2ND OPTION.\n");
    printf(" *PRESS 3 TO QUIT THE GAME IF YOU DON'T WANT TO PLAY ANYMORE!!!\n\n");

    printf(">>>RULES :-----\n\n");

    printf(" *THE GAME ENDS AS YOU GO BELOW '0' OR ABOVE '21'.\n");
    printf(" *THE GAME STARTS WITH '10' AS THE STARTING VALUE.\n\n");

    printf("                                  >>>>>>> DANGER-AHEAD !  WARNING ! BE-CAREFULL <<<<<<<\n\n");

    printf("                                        : YOU STILL HAVE CHANCE TO QUIT THE GAME :\n\n");
    printf("ENTER YOUR NAME TO GET DEMOLISHED :");
    gets(d);
    printf("THE GAME BEGInS HERE!!!!\n");
    printf("GET READY TO DESTROY YOUR LIFE %s !!!\n", d);
    highscore();
    printf("!!!HERE COMES THE OPTIONS!!!\n");

    while (1<2)
    {
        num = (rand() % (u - l + 1)) + l;
        printf(" 1. ");
        printf("%d\n", num);
        num1 = (rand() % (u - l + 1)) + l;
        printf(" 2. ");
        printf("%d", num1);
        printf("\n ENTER YOUR OPTION : ");
        scanf("%d", &r);
        if (r<1 || r>3)
        {
            printf("INVALID INPUT.\n");
            continue;
        }

        if (r == 1)
        {
            result += num;
            printf("\n YOUR NUMBER IS : %d\n", result);
        }

        if (r == 2)
        {
            result += num1;
            printf("\n YOUR NUMBER IS : %d\n", result);
        }

        if (r == 3)
        {
            printf("YOU SELECT TO QUIT LOSER!!!\n");
            printf("          I TOLD YOU BEFORE YOU WILL NOT BE ABLE TO COMPLETE THE GAME!!!\n");
            break;
        }

        if (result>0 || result<21)
        {
            score += 10;
            printf(" YOUR SCORE IS: %d\n", score); 
        }

        if (result<0 || result>21)
        {
            printf("\n I SAID YOU,\n");
            printf("             YOU WILL LOSE.\n\n");
            printf(" <<< DON'T CRY %s !!! YOU CAN PLAY AGAIN AND BECOME CHAMPION >>>\n", d);
            printf("           (: GOOD LUCK FOR YOUR NEXT TRY :)\n");
            break;
        }

    }

    return 0;
}

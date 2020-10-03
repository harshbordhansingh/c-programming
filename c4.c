#include<stdio.h> 

#include<stdlib.h> 

#include<time.h> 

void  highscore_name();//to show high score and player name 

int obtain_number(int,int);//to get random number in range -10 to 10 

int get_score();/*to read from file and get high score from if(score>highscore)*/ 

 

//to show high score and player name 

void  highscore_name() 

{ 

    int buffer; 

    FILE *fhighscore, *fname; 

 

        //to print high score 

        fhighscore = fopen("highscore.txt", "r"); 

        if(fhighscore==NULL){ 

            return ; 

        } 

        else{ 

            fread(&buffer, sizeof(int), 1, fhighscore); 

            printf("\nHIGH SCORE= %d\n", buffer); 

            fclose(fhighscore); 

        } 

 

        //to print player name 

        fname = fopen("name.txt", "r"); 

        char line[20]; 

        printf("PLAYER NAME: "); 

        while(!feof(fname)){ 

            fgets(line, 20, fname); 

            puts(line); 

        } 

        fclose(fname); 

        int i=0; 

        while(i<70) 

    { 

       printf("*"); 

       i++; 

    } 

        return; 

} 

 

void main() 

{ 

    int i=0; 

    while(i<70) 

    { 

       printf("*"); 

       i++; 

    } 

    i=0; 

    printf("\n\t\twelcome to math of luck game\n"); 

    while(i<70) 

    { 

       printf("*"); 

       i++; 

    } 

    printf("\nhow to play: \n%cselect option respective to the option number", 4); 

    printf("\n%cyou can chose 0 for game exit; 1 for 1st number and 2 for 2nd number", 4); 

    printf("\n%cyou start with a total of 10", 4); 

    printf("\n%cyou can enter your full name also", 4); 

    printf("\n%cif ur number falls below 0 or above 21 you lose\n", 4); 

    i=0; 

    while(i<70) 

    { 

       printf("*"); 

       i++; 

    } 

    printf("\nyou are all good to go"); 

    printf("\ntry to record your own new high score\n"); 

    i=0; 

    while(i<70) 

    { 

       printf("*"); 

       i++; 

    } 

 

    highscore_name(); 

    int upper=10, lower=-10, opt1, opt2, choice, sum=10; 

    int score=0, highscore=0; 

    int form[20]; 

    printf("\n\nenter you name: "); 

    gets(form); 

    srand(time(NULL)); 

    while(1) 

    { 

        opt1= obtain_number(upper, lower);//formula to get random number in given range 

        opt2= obtain_number(upper, lower); 

        printf("\n\nselect your option:--\n"); 

        printf("0.exit game     1. %d     2. %d", opt1, opt2); 

        printf("\nenter your choice: "); 

        scanf("%d", &choice); 

        if(choice==1){ 

            sum= sum + opt1; 

        } 

        else if(choice==2){ 

            sum= sum + opt2; 

        } 

        else if(choice==0){ 

            exit(1); 

        } 

        else{ 

            printf("INVALID OPTION\nTry Again"); 

            continue; 

        } 

        score++; 

        printf("your number is : %d", sum); 

        if(sum<0 || sum>21){ 

            score--; 

            printf("\n\nyour score: %d  \nplayer name: ", score); 

            puts(form); 

            break; 

        } 

    } 

    highscore= get_score(); 

 

    //here the file is created for the 1st time 

    if(score>highscore){ 

        FILE *fhighscore, *fname; 

        //storing integer in a new file 

        fhighscore = fopen("highscore.txt", "w"); 

        fwrite(&score, sizeof(int), 1, fhighscore); 

        fclose(fhighscore); 

 

        fname = fopen("name.txt", "w"); 

        fprintf(fname,"%s", form); 

        fclose(fname); 

 

        printf("\nCONGRATULATIONS!!\nYou have recorded a NEW HIGH SCORE\n"); 

        exit(2); 

    } 

    printf("!!GAME OVER!!"); 

    printf("\nbetter luck next time\n\n"); 

} 

 

//to get random numbers betn -10 and 10 

int obtain_number(int a,int b) 

{ 

    int num; 

    num= (rand()%(a-b+1))+b; 

    return num; 

} 

 

/*to read from file and get high score for if statement line*/ 

int get_score() 

{ 

    //get stored high score 

    int buffer; 

    FILE *fptr; 

    fptr = fopen("highscore.txt", "r"); 

    if(fptr==NULL) 

    { 

        return 0; 

    } 

    else 

    { 

        fread(&buffer, sizeof(int), 1, fptr); 

        fclose(fptr); 

        return buffer; 

    } 

} 
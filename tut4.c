#include<stdio.h>

int main(){
    int marks1, marks2, marks3, avg;
    printf("Enter the marks of the subject1: \n");
    scanf(" %d", marks1);
    printf("Enter the marks of the subject2: \n");
    scanf(" %d", marks2);
    printf("Enter the marks of the subject3: \n");
    scanf(" %d", marks3);
    avg = (marks1 + marks2 + marks3)/3;
    if (marks1<33 || marks2<33|| marks3<33 || avg<40)
    {
        printf("You failed study hard next time with %d marks\n", avg);
    }else
    {
        printf("You have passed the exam with %d marks\n", avg);
    }  
}
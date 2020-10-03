#include<stdio.h>
#include<string.h>
void main()
{
    char str[50], b[50]="ay";
    char str3[50];
    int pos;
    int k=0,j=0;
    printf("Enter the string:");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == str[1])
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
    for (int i = 0; i < pos; i++)
    {   
        printf("%c",str[i]);
    }
}
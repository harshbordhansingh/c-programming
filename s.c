#include<stdio.h>
enum day{sun, mon, tue, wed, thu, fri, sat};
void print_day(enum day d)
{
    switch (d)
    {
        case sun:
        printf("sunday");
            break;

        case mon:
        printf("monday");
            break;

        case tue:
        printf("tuesday");
            break;

        case wed:
        printf("wednesday");
            break;

        case thu:
        printf("thfriday");
            break;

        case fri:
        printf("friday");
            break;
        
        default:
        printf("%d is an error");
            break;
    }
}
enum day next_day(enum day d)
{
    return (d+1 %7);
}
int main()
{
    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(5);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}
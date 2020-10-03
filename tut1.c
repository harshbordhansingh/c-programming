#include<stdio.h>
int area1(int a){
    int area;
    area = a*a;
    return area;
}

int main(){
    int len;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &len);
    printf("The desired area is %d", area1(len));
    return 0;
}
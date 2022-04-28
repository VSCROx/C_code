// WAP to swap two no. with and without using third variable
#include<stdio.h>

int main(){
    int a=2, b=4;
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("Value After swapping - Using third variable\n");
    // printf("Value of a & b: %d %d",a, b);

    printf("*****************\n");

    printf("Value After swapping- Using without third variable\n");
    a = a+b;

    b = a-b;
    a = a-b;
    printf("Value of a & b: %d %d",a, b);
    return 0;
}
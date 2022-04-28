// Pointers is a variable which stores the address of the another variable
#include<stdio.h>

int main(){
    // int i=5;
    // int *ptr;
    // ptr = &i;
    // printf("The address of i is: %u\n",&i);
    // printf("The address of i is: %u\n",ptr);
    // printf("The value of i is: %d\n",i);
    // printf("The value of i is: %d\n",*ptr);

    char c = 'x';
    char *ptr;
    ptr = &c;
    printf("The address of char c is: %u\n",&c);
    printf("The address of char c is: %u\n",ptr);
    printf("The value of char c is: %c\n",c);
    printf("The value of char c is: %c\n",*ptr);
    return 0;
}
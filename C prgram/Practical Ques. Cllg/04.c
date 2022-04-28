#include<stdio.h>

int main(){
    int num1, num2, xor;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    xor = ((num1 && (!num2)) || ((!num1) && num2)) ;

    printf("The Result of XOR operator : %d\n",xor);
    return 0;
}

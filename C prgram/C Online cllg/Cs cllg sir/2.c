#include<stdio.h>
int main(void){
    int i1;
    int i2;
     
    printf("Enter first integer\n");
    scanf("%d", &i1);   // read an integer
    
    printf("Enter second integer\n");
    scanf("%d", &i2);   // read an integer

    int sum;
    sum = i1 + i2;

    printf("Sum is %d\n", sum);
    
}
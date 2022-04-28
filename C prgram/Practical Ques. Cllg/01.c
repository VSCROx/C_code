#include<stdio.h>

int main(){
    int num,pos,Rsf,Lsf;

    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Shift given number by: ");
    scanf("%d",&pos);

    Rsf = num>>pos;
    Lsf = num<<pos;

    printf("The num %d after right shift by %d is: %d\n",num,pos,Rsf);
    printf("The num %d after left shift by %d is: %d\n",num,pos,Lsf);
    printf("Hence, Right shift effectively divides a number by 2 & Left shift effectively multiplies a number by 2\n");
    return 0;
}

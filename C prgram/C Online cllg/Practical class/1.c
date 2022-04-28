// WAP to calc and display the volume of cube by taking i/p from user
#include<stdio.h>

int main(){
    float side;
    printf("Enter the side of cube\n");
    scanf("%f",&side);

    printf("The volume of cube is %f \n",side*side*side);
    return 0;
}
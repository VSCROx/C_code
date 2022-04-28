// WAP to calc simple and compound interest
#include<stdio.h>
#include<math.h>
int main(){
    float principal, rate;
    int year;

    printf("Enter the principal amt\n");
    scanf("%f",&principal);

    printf("Enter the rate\n");
    scanf("%f",&rate);
    printf("Enter the no. of years\n");
    scanf("%d",&year);

    float SI = (principal*rate*year)/100;
    float CI = pow((principal*(1+(rate/100))),year)-principal;

    printf("Simple Interest is: %f \n",SI);
    printf("Compound Interest is: %f \n",CI);
    return 0;
}
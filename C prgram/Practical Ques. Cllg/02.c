#include<stdio.h>

int main(){
    float n1,n2,result;

    printf("Enter numbers a & b to find the quotient(n1&n2): ");
    scanf("%f %f",&n1,&n2);

    if(n2 != 0){
        result = n1/n2;
        printf("The Quotient %.0f/%.0f is: %0.2f",n1,n2,result);
    }
    else{
        printf("Division by 0 detected(Not Defined)\n");
    }
    return 0;
}


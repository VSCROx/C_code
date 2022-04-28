// WAP to check a number is prime or not
#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    int flag = 0;
    for(int i=2; i<(num/2); i++){
        if(num%i == 0){
            flag =1;
            break;
        }
    }
    if(flag == 0){
        printf("Number is prime\n");
    }
    else{
        printf("Not a prime number\n");
    }
    return 0;
}
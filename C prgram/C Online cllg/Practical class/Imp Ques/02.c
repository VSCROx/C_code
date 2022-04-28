#include<stdio.h>

int main(){
    // Armstrong no. or not
    int n;
    scanf("%d",&n);
    int temp = n;
    int rem, sum = 0;
    while(n>0){
        rem = n%10;
        sum += rem*rem*rem;
        n /= 10;
    }

    if(sum==temp){
        printf("The given number is armstrong:\n");
    }
    else{
        printf("The number is not armstrong:\n");
    }
    return 0;
}
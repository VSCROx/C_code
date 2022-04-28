// WAP to check whether a number is palindrome
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);

    int initial = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10  + rem;
        n /= 10;
    }

    if(rev == initial){
        printf("Number is palindrome!!");
    }
    else{
        printf("Number  is not a palindrome!!");
    }
    return 0;
}
// WAP to print sum of digits using loop
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);

    int sum=0;
    while(n>0){
        int rem = n%10;
        sum += rem; 
        n = n/10;
    }
    printf("The sum of digits %d",sum);
    return 0;
}

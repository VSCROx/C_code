#include<stdio.h>

int main(){
    int n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
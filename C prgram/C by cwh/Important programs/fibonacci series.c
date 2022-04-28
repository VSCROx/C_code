//Fibnacci series using recursion: 0 1 1 2 3 5 8 13 21
#include<stdio.h>

int fib_recrusive(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib_recrusive(n-1) + fib_recrusive(n-2);
}

int main(){
    int n;
    printf("Enter the number you want the fibnacci series number:\n");
    scanf("%d",&n);
    // printf("%d\n",fib_recrusive(n));

    int a = 0, b=1,c;
    // printf("%d\n%d\n",a,b);
    for(int i=0; i<(n-2); i++){
        c = a+b;
        // printf("%d\n",c);
        a=b;
        b=c;
    }
    printf("%d\n",c);
    return 0;
}
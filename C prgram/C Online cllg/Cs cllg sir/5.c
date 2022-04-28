#include<stdio.h>

#define n 9
int main(){
    int a[n] = {1,3,4,5,6,6,7,7,8};
    for(int i=0; i<n; i++){
        printf("%4d%5d\n",i,a[i]);
    }

    return 0;
}
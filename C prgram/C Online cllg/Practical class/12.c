// WAP to perform addition of all elements in Array
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    printf("The sum of all elements is: %d\n",sum);
    return 0;
}
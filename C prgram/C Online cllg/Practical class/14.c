// Write a Program to Search an element in array
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int key; scanf("%d",&key);
    for(int i=0; i<n; i++){
        if(a[i] == key){
            printf("Given element is at index: %d",i);
            break;
        }
    }
    return 0;
}
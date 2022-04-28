// Write a Program to reverse the array elements
Error
#include<stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int start=0, end=n-1;
    for(int i=0; i<n; i++){
        if(start<end){
            a[start],a[end] = a[end],a[start];
            start++;
            end--;
        }
    }
    //print reverse array
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
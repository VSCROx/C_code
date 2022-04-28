// WAP to find the maximum and minimum value from array
#include<stdio.h>
#include<limits.h>
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int mx = a[0];
    int mn = a[0];

    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx = a[i];
        }
        if(a[i] < mn){
            mn = a[i];
        }
    }
    printf("The max value  is: %d \nThe min value is: %d\n",mx,mn);
    // printf("The min value is: %d\n",mn);
    return 0;
}


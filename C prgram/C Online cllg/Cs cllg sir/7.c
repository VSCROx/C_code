#include<stdio.h>

int main(){
    int n[5];
    for(int i=0;i<5;i++)
       n[i]=i;
    
    for(int i=0;i<5;i++)
      printf("%3s %d","hi",n[i]);
    
    return 0;
}
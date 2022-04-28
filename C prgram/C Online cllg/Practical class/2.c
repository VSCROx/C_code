// WAP to take i/p of rollno and marks obtained by a std in 4 subjects of 100 marks each and 
// display the rollno with percentage score secured.
#include<stdio.h>

int main(){

    int rollno;
    float cs, maths, phy, elect;

    printf("Enter the rollno:\n");
    scanf("%d",&rollno);

    printf("Enter the marks in cs:\n");
    scanf("%f",&cs);
    printf("Enter the marks in maths:\n");
    scanf("%f",&maths);
    printf("Enter the marks in phy:\n");
    scanf("%f",&phy);
    printf("Enter the marks in elect:\n");
    scanf("%f",&elect);
    
    float percent = (cs+maths+phy+elect)/4;

    printf("*******-Result-************\n");
    printf("Rollno is:%d \n",rollno);
    printf("Percentage scored: %f",percent);
    return 0;
}
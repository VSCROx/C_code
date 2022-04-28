#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    // e1.code = 134;
    // e1.salary = 34.3354;
    // strcpy(e1.name,"Vivek");

    printf("Enter the value for code of e1: ");
    scanf("%d", &e1.code);
    printf("Enter the value for salary of e1: ");
    scanf("%f",&e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%s", e1.name);

    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s\n",e1.name);


    return 0;
}
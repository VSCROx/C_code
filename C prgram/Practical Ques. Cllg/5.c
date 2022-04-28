// #include<stdio.h>

// void main(){
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     char *ptr;
//     ptr = str;
//     int len = 0;
//     for(int i=0; *ptr!='\0'; i++){
//         len++;
//         ptr++;
//     }
//     printf("The length of the entered string is: %d\n",len);
// }

// #include <stdio.h>
// struct Address
// {
//     int street_number;
//     char city[50];
//     char state[50];
//     char district[50];
// };
// struct Details
// {
//     int Emp_age;
//     char Emp_name[50];
//     char Emp_degree[50];
//     float Emp_exp;
//     struct Address Emp_add;
// };
// int main()
// {
//     int n;
//     printf("Enter the number of employees : ");
//     scanf("%d", &n);
//     struct Details Emp_det[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the age of employee %d : ", i + 1);
//         scanf("%d", &Emp_det[i].Emp_age);
//         printf("Enter the name of employee %d :", i + 1);
//         scanf("%s", Emp_det[i].Emp_name);
//         printf("Enter the degree of employee %d : ", i + 1);
//         scanf("%s", Emp_det[i].Emp_degree);
//         printf("Enter the expenses of employee %d : ", i + 1);
//         scanf("%f", &Emp_det[i].Emp_exp);
//         printf("Enter the address of employee %d :\n", i + 1);
//         printf("Street : ");
//         scanf("%d", &Emp_det[i].Emp_add.street_number);
//         printf("City : ");
//         scanf("%s", Emp_det[i].Emp_add.city);
//         printf("District : ");
//         scanf("%s", Emp_det[i].Emp_add.district);
//         printf("State : ");
//         scanf("%s", Emp_det[i].Emp_add.state);
//         printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Age of employee %d is %d\n", i + 1, Emp_det[i].Emp_age);
//         printf("Name of employee %d is %s\n", i + 1, Emp_det[i].Emp_name);
//         printf("Degree of employee %d : %s\n", i + 1, Emp_det[i].Emp_degree);
//         printf("Expenses of employee %d is %f\n", i + 1, Emp_det[i].Emp_exp);
//         printf("Address of employee %d \n", i + 1);
//         printf("Street : %d", Emp_det[i].Emp_add.street_number);
//         printf("\nCity : %s", Emp_det[i].Emp_add.city);
//         printf("\nDistrict : %s", Emp_det[i].Emp_add.district);
//         printf("\nState : %s\n", Emp_det[i].Emp_add.state);
//     }
// }


// Pascal Triangle 

// #include<stdio.h>

// int pascal(int a, int x){
//     if(a==x || x==0)
//         return 1;
//     else
//         return pascal(a-1,x) + pascal(a-1,x-1);
// }

// int main(){
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d",&n);
//     n -= 1;
//     for(int k=0; n>=k; k++){
//         for(int s=0; s<(n-k); s++)
//             printf(" ");
//         for(int m=0; k>=m; m++){
//             int f = pascal(k,m);
//             printf("%d ",f);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    FILE *ptr;
    char ch;
    ptr = fopen("myfile.txt","r");
    ch = getc(ptr);
    printf("%c",ch);
    while(!feof(ptr)){
        ch = getc(ptr);
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}

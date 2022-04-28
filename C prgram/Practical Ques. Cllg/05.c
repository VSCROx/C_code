#include<stdio.h>

int main(){
    float marks[3][30];
    int arr[3];
    int m, n;

        printf("Enter number of sections :");
        scanf("%d",&n);

        while(n>3){
            printf("Enter value less than or equal to 3\n");
            scanf("%d",&n);
        }

    for(int i=0; i<n; i++){
        printf("Enter number of students in section %d\n",i+1);
        scanf("%d",&m);
        
        while(m>30){
            printf("Enter value less than or equal to 30\n");
            scanf("%d",&m);
        }
        arr[i] = m;
        for(int j=0; j<m; j++){
            printf("Enter Marks of section %d student %d\n",i+1,j+1);
            scanf("%f",&marks[i][j]);
        }
    }

    printf("The Marks of students of all classes have been stored successfully in a two-dimensional array!!!\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<arr[i]; j++){
            printf("Marks of Section %d student %d are %.2f\n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}

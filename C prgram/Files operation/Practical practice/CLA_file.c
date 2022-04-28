#include<stdio.h>

int main(int argc, char* argv[]){
    if(argc!=2){
        printf("usage: %s filename",argv[0]);
    }
    else{
        FILE* fptr = fopen(argv[1],"r");

        if(fptr == NULL){
            printf("Could not open file\n");
        }
        else{
            int x;
            while((x=fgetc(fptr))!=EOF)
                printf("%c",x);
            fclose(fptr);
        }
    }
    return 0;
}

// #include<stdio.h>

// int main(int argc, char const *argv[]){
//     printf("The value of argc is: %d\n",argc);
//     return 0;
// }
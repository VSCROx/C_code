#include<stdio.h>

int main(int argc, char* argv[]){
    if(argc!=3){
        printf("usage: %s filename",argv[0]);
    }
    else{
        FILE* fptr;
        FILE* fptr2;
        fptr = fopen(argv[1],"r");
        fptr2 = fopen(argv[2],"w");
        
        if(fptr == NULL){
            printf("Could not open file\n");
        }
        else{
            int x;
            while((x=fgetc(fptr))!=EOF)
                if(x==' ')
            fclose(fptr);
        }
        
    return 0;
}
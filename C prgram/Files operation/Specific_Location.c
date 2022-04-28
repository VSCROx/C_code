// Moving to a specific location in a file

// * fseek() - It is used to moves the reading control to different positions using fseek function.
// * ftell() - It tells the byte location of current position in file pointer.
// * rewind() - It moves the control to beginning of a file.

// Syntax - *** 1.fseek() ***
// int fseek(FILE* stream, long int offset, int whence);
// Example: fseek(f,0,SEEK_END);

// 1st
// #include<stdio.h>

// int main(){
//     FILE* f;
//     f = fopen("test.txt","r");

//     if(f==NULL){
//         printf("\nCan't open file or file doesn't exist.");
//     }
//     fseek(f,0,SEEK_END);
//     printf("The size of file: %ld bytes",ftell(f));
//     fclose(ptr);
//     return 0;
// }

// 2nd(fseek(), ftell(), rewind())
#include<stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("test.txt","r");

    for(int i=1; i<=10; i++){
        printf("%c: %d\n",getc(ptr),ftell(ptr));
        fseek(ptr,ftell(ptr),0);
        if(i==5){
            rewind(ptr);
        }
    }
    fclose(ptr);
    return 0;
}
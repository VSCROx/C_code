// *************Writing to a File************

// >>> fputc() - It will write characters to a file 
// @ It will take two arguments - the character which you want to write in the file - the pointer name which you have used as an FILE pointer 
// @ It will return the written character in the file
// @ If it fails, for any reason, it will return -1 i.e.EOF
// Syntax =
// fputc(character,FILE pointer);

#include<stdio.h>

int main(){
    FILE* ptr = NULL;
    ptr = fopen("mynote.txt","w");
    
    fputc('V',ptr);     // char by char
    fputs("Welcome to Code World!",ptr);
    fclose(ptr); 
    return 0;
}
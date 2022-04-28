// *** Different Modes in File Handling ***

// 1. r+ = @ Opening an existing text file for both reading and writing.
//  @ It will replace the existing content with that of new content only from the beginning, rest text will be the same.

// 2. w+ = @ If text is present in the file, it truncates it to zero length and then writes into it.
// @ If file doesn't exist, then a new file is created.

// 3. a+ = @ The reading will start from the beginning but writing can only append to file.
// @ If file doesn't exist, then a new file is created.

#include<stdio.h>

int main(){
    FILE* ptr = NULL;
    ptr = fopen("mynote.txt","r+");

    fputc('a',ptr);
    fputs("Welcome to Coder:)",ptr);

    fclose(ptr);
    return 0;
}
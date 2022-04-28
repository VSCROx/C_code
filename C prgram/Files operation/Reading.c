// FILE Pointer stores the address of the file
// (1.).......Opening an Existing File............
// >>> fopen() - Used to open a file in different modes
// @ Read, write and append modes
// @ It opens a file and returns address of file(FILE pointer)
// @ If the file is not present , It returns NULL pointer

// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     ptr = fopen("test.txt","r");
//     if(ptr == NULL){
//         printf("File not present\n");
//     }
//     else{
//         printf("File opened in read mode\n");
//     }
//     fclose(ptr);
//     return 0;
// }

 
// (2.).......Reading from File............
// >>> fgetc() - Used to read character from a file
// It will take one argument - FILE* stream - from which file you want to read - the file pointer you need to pass as an argument
// It will return ASCII value of character
// If it fails, for any reason, it will return -1 i.e. EOF
// Syntax -
// fgetc(FILE* stream;

#include<stdio.h>

int main(){
    FILE* ptr = NULL;
    ptr = fopen("test.txt","r");
    
    // ***1.Reading char by char***
    // char c = fgetc(ptr);
    // printf("The first character which I am reading is: %c\n",c);
    // c = fgetc(ptr);
    // printf("The second character which I am reading is: %c\n",c);
    // c = fgetc(ptr);
    // printf("The second character which I am reading is: %c\n",c);

    //***2.Reading whole file
    // int ch;   // can write -> char ch;
    // while((ch=fgetc(ptr)) != EOF){
    //     printf("%c",ch);
    // }

    // 3. Reading from file
    char str[4];
    fgets(str,5,ptr);   // +1 for null char
    printf("The string is: %s\n",str);
    fclose(ptr);
    return 0;
}
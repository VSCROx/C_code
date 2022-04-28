#include<stdio.h>
#include<ctype.h>

void converttoUppercase(char *ptr){
    while(*ptr != '\0'){
        *ptr = toupper(*ptr);
        ++ptr;
    }
}

int main(){
    char st[] = "cHaraCtErs and $23.3";
    printf("String before upppercase: %s\n",st);
    converttoUppercase(st);
    puts("");   
    printf("String after uppercase: %s\n",st);
    
    return 0;
}
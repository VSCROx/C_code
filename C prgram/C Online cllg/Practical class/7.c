// Check if a char is consonant or not
#include<stdio.h>

int main(){
    char x; scanf("%c",&x);

    switch (x)
    {
    case 'a':
        printf("1st vowel");
        break;
    case 'e':
        printf("2nd vowel");
        break;
    case 'i':
        printf("3rd vowel");
        break;
    case 'o':
        printf("4th vowel");
        break;
    case 'u':
        printf("5th vowel");
        break;
    
    default:
    printf("Not a vowel entered!!");
        break;
    }
    return 0;
}
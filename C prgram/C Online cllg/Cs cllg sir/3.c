#include <stdio.h>

int main()
{
    unsigned int counter = 1;
    do
    {
        printf("%u ", counter);
    } while (counter++ <= 10);
    
    return 0;
}
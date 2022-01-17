#include <stdio.h>
#include <ctype.h>


int main()
{
    char alphabet;
    printf("enter the alphabet: \n");
    putchar('\n');
    alphabet=getchar();

    printf("reverse case of %c is: \n", alphabet);

    if (islower(alphabet))
    {
        // printf("%c \n", toupper(alphabet));
        putchar(toupper(alphabet));
    }
    
    else
    {
        printf("%c \n", tolower(alphabet));
    }
    
    return 0;
}
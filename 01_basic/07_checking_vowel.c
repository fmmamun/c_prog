#include <stdio.h>


int main()
{
    char ch;
    printf("enter the character: \n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("the character %c is vowel\n", ch);
        break;
    default:
        printf("the character %c is not vowel\n", ch);
        break;
    }
}
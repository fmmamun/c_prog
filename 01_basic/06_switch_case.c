#include <stdio.h>


int main()
{
    char grade;
    printf("enter your greade: \n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A'/* constant-expression */:
        printf("Excellent\n");
        break;
    case 'B'/* constant-expression */:
        printf("Keep it up\n");
        break;
    case 'C'/* constant-expression */:
        printf("well done\n");
        break;
    case 'D'/* constant-expression */:
        printf("passed\n");
        break;
    default:
         printf("invalid\n");
        break;
    }
}
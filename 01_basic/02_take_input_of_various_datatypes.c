#include <stdio.h>


int main()
{
    printf("Input Prog\n");
    int num1, num2;
    float fraction;
    char character;
    printf("Enert two numbers number \n");
    scanf("%d%d", &num1, &num2);
    printf("two nuber is %d and %d", num1, num2);

    printf("\nEnter decimal Number\t");
    scanf("%f", &fraction);

    printf("\nthe fload number is %.2f\n", fraction);

    
    printf("enter character: ");
    scanf("%c", &character);
    printf("\nthe character is: %c\n", character);    
    return 0;
}
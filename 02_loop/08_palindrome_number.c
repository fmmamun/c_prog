#include <stdio.h>

int main()
{
    int num, b, rem, rev=0;
    printf("Enter the Number: \n");
    scanf("%d", &num);

    rem=num;

    while (num > 0)
    {
        b=num%10;
        rev=(rev*10)+b;
        num=num/10;
    }
    
    if (rev == rem)
    {
        printf("%d is palindrome\n", rem);
    }
    else
    {
        printf("%d is not palindrome\n", rem);
    }
    return 0;
}
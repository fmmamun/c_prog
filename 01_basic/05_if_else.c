#include <stdio.h>

int main()
{
    int n;
    printf("enter the number: \n");
    scanf("%d", &n);

    if (n<100)
    {
        printf("%d is less than 100\n", n);
    }
    else if (n==100)
    {
        printf("%d is equal to 100\n", n);
    }
    else
    {
        printf("%d is greater than 100\n", n);
    }
    
    return 0;
}
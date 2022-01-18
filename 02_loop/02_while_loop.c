#include <stdio.h>

int main()
{
    int i = 1, j;
    printf("enter the number: \n");
    scanf("%d", &j);

    while (i<=j)
    {
        printf("i = %d\n", i),
        i++;
    }
    return 0;
    
}
#include <stdio.h>

int a, b;

int main ()
{
    printf("enter the number: \n");
    scanf("%d%d", &a, &b);

    if (a==b)
    {
        printf("a equal to b\n");
    }
    else if (a<b)
    {
        printf("the largest number is: %03d\n", b);
        printf("the smallest number is: %03d\n", a);
    }
    else
    {
        printf("the largest number is: %03d\n", a);
        printf("the smallest number is: %03d\n", b); 
    }           
    return 0;
}
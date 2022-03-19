#include <stdio.h>


int main ()
{
    int a=10, b=20;
    int *x, *y;
    x=&a;
    y=&b;
    printf("x: %d\n", *x);
    printf("y: %d\n", *y);
}
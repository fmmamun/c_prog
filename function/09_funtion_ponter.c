#include <stdio.h>

int sum(int,int);

void main()
{
    int s = 0;
    int (*prt)(int,int)=&sum;
    s = (*prt)(5,6);
    printf("S = %d\n", s);
}

int sum(int a, int b)
{
    return a+b;
}
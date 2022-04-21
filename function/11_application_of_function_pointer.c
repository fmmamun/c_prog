#include <stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);
// void (*fptr[10])(int, int);

void main()
{
    int ch, a, b;
    void (*fptr[10])(int, int) = {add, sub, mul, div};
    printf("enter choice: ");
    scanf("%d",&ch);
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    (*fptr[ch]) (a, b);
}


void add(int a, int b)
{
    printf("add = %d\n",a+b);
}

void sub(int a, int b)
{
    printf("sub = %d\n",a-b);
}

void mul(int a, int b)
{
    printf("mul = %d\n",a*b);
}

void div(int a, int b)
{
    printf("div = %d\n",a/b);
}
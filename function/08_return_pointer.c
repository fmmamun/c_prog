#include <stdio.h>

// int * returnPointer(int []);
int * returnPointer(int *);

void main()
{
    int *p;
    int a[]={1,2,3,4,5};
    p = returnPointer(a);
    printf("%d\n", *p);
}

// int * returnPointer(int a[])
int * returnPointer(int *a)
{
    a = a + 2;
    return a;
}
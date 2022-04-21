#include <stdio.h>

void display(void (*ptr)(int, int));
// void (*ptr)(int, int);
void sum(int, int);
void sub(int, int);

int main()
{
    display(&sum);
    display(sub);
}

void sum(int a, int b)
{
    printf("sum is = %d\n", a+b);
}

void sub(int a, int b)
{
    printf("sub is = %d\n", a-b);
}

void display(void (*ptr)(int, int))
{
    (*ptr)(10,5);
}

// int main()
// {
//     display(&sum);
//     display(sub);
// }
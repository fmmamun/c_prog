#include <stdio.h>

void fun1(void);
void fun2(void);

int main()
{
    extern int a;
    printf("a = %d\n",a);
        fun1();
        fun2();
}

void fun1()
{
    int a = 2;
    a++;
    printf("a = %d\n", a);
}

void fun2()
{
    printf("hello from funr2\n");
}

int a = 4;      //this is access from main funtion
#include <stdio.h>

void display(char []);
// void display(char * []);

void main()
{
    char str[]={"Mamun"};
    display(str);
}

void display(char str[])
// void display(char * str[])
{
    printf("string is: %s\n",str);
}
#include <stdio.h>
// #include "main_file.c"


void display()
{
    extern int x;       //this is just declaration. this not use memory
    x++;
    printf("x is from support file: %d\n", x);
}
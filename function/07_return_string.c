#include <stdio.h>

char * display();

void main()
{
    char *str;
    str = display();
    printf("string is: %s\n", str);
}

// char * display()
// {
//     return "mamun";     //memory allocate in heap area and this will not vanished untill end the program
// }

char * display()
{
    char str[]={"Mamun"};                   //problem
    // static char str[]={"Mamun"};        //solution 1
    // char * str[]={"Mamun"};             //solution 2
    // const char * str[]={"Mamun"};       //this will not allow modify. use const also main funtion variable
    return str;     //memory allocate in stack area and this will vanished. solution is use static avobe line variable declaration
}
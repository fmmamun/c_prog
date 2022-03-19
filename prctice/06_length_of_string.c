#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int i=0, count=0;
    printf("enter the string: ");
    gets(name);
    puts(name);
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    printf("length of string is: %d\n", count);
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    // char ch = 'm';
    char str[20]={"f m mamun"};
    int a = 1;
    fp = fopen("abc.txt", "w");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }
    
    // printf("enter a character: ");
    // scanf("%c", &ch);

    // fputs(str, fp);
    fprintf(fp, "%d %s", a, str);
    fclose(fp);
}
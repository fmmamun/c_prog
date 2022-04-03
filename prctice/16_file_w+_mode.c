#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "w+");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }

    //user input string
    printf("enter the string: ");
    gets(str);

    //write to file
    fputs(str, fp);

    //read file
    rewind(fp);
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    
    printf("\n");
    fclose(fp);

}
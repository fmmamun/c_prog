#include <stdio.h>
#include <stdlib.h>

void main ()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "a");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }
    // ch = fgetc(fp);
    // printf("%c", ch);

    //for read file
    // while (!feof(fp))
    // {
    //     ch = fgetc(fp);
    //     printf("%c", ch);
    // }

    //for read file
    // fgets(str, 30, fp);
    // printf("%s", str);

    //multiple line read
    // while (!feof(fp))
    // {
    //     fgets(str, 99, fp);
    //     printf("%s", str);
    // }
    
    //write to file
    printf("enter the line: ");
    gets(str);
    // fputs(str, fp);
    fprintf(fp, "\n%s", str);
    // printf("\n");

    fclose(fp);
}
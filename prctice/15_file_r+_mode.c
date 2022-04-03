#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "r+");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }

    //for read file
    // fgets(str, 30, fp);
    // printf("%s", str);


    //wirte to file
    fputs("jenny", fp);

    fclose(fp);

}
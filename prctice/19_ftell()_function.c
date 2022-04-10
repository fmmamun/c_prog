#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    long int position;
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }

    //find pointer position
    position = ftell(fp);
    printf("%ld\n", position);

    //move pointer and print position
    fseek(fp, 3, SEEK_SET);
    printf("%ld\n", ftell(fp));

    //read character at position
    ch = fgetc(fp);
    printf("%c\n", ch);

    //print pointer possition
    printf("%ld", ftell(fp));
    printf("\n");
    fclose(fp);

}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }

    //read character at 6th position
    fseek(fp, 6, SEEK_SET);
    ch = fgetc(fp);
    printf("%c", ch);
    printf("\n");
    
    //pointer set current position to -3 position
    fseek(fp, -3, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c", ch);
    printf("\n");

    //pointer set from end to - 3
    fseek(fp, -3, SEEK_END);
    ch = fgetc(fp);
    printf("%c", ch);
    printf("\n");
    fclose(fp);

}
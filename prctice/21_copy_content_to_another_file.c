#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp1=NULL;
    FILE *fp2=NULL;
    char ch;
    char str[100];
    fp1 = fopen("abc.txt", "r");
    if (fp1 == NULL)
    {
        printf("file missing");
        exit(1);
    }
    fp2 = fopen("copy.txt", "w");
    if (fp2 == NULL)
    {
        printf("file missing");
        exit(1);
    }
    //copy content using while loop
    // while ((ch = fgetc(fp1)) != EOF)
    // {
    //     fputc(ch, fp2);
    // }

    //copy content using for loop
    for(ch = fgetc(fp1); ch != EOF; ch = fgetc(fp1))
    {
        fputc(ch, fp2);
    }
    

    printf("copied\n");
    fclose(fp1);
    fclose(fp2);

}
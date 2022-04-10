#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
    int count = 1, w_count=0;
    char ch;
    char str[100];
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("file missing");
        exit(1);
    }

    //line adn word count using while loop
    // while ((ch = fgetc(fp)) != EOF)
    // {
    //     if (ch == '\n')
    //     {
    //         count ++;
    //     }
    //     w_count ++;        
    // }

    //line adn word count using for loop
    for ( ch = fgetc(fp); ch != EOF; ch = fgetc(fp) )
    {
        if (ch == '\n')
            {
                count ++;
            }
            w_count ++;    
    }
    


    printf("Line count: %d\n", count);
    printf("Word count: %d\n", w_count);
    
    fclose(fp);

}
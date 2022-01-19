#include <stdio.h>

int main()
{
    char strg[100], rev[100];
    int i, j, count=0;

    printf("enter the string: \n");
    scanf("%s", strg);

    while (strg[count] != '\0')
    {
        count++;
    }

    j=count-1;

    for ( i = 0; i <= count; i++)
    {
        rev[i]=strg[j];
        j--;
    }
    
    printf("%s\n", rev);
        
}
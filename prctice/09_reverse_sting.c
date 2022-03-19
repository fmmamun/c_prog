#include <stdio.h>
#include <string.h>


int main ()
{
    char a[30], temp;
    int len, i;
    printf("enter the string: ");
    gets(a);
    len = strlen(a);
    printf("%d", len);
    for ( i = 0; i < len/2 ; i++)
    {
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    
    printf("\n");
    printf("%s", a);
}


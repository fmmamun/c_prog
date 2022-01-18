#include <stdio.h>

int main()
{
    int i=0, j;
    printf("enter J: \n");
    scanf("%d", &j);

    do
    {
        printf("i = %d\n", i);
        i = i+1;
    } while (i<j);
    
    return 0;
}
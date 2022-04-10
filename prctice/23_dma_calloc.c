#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, j, *ptr;

    printf("enter total number of values: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));

    for ( i = 0, j = 1; i < n; i++, j++)
    {
        printf("enter the value number %d: ", j);
        scanf("%d", (ptr+i));
    }
    
    for ( i = 0, j = 1; i < n; i++, j++)
    {
        printf("the value number %d is: ", j);
        printf("%d\n", *(ptr+i));
    }

    free(ptr);
}
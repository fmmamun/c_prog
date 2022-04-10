#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, j, *ptr;

    printf("enter total number of values: ");
    scanf("%d", &n);
    ptr = (int *) malloc(n*sizeof(int));

    if (ptr == NULL)
    {
        printf("error");
        exit(1);
    }

    for ( i = 0, j = 1; i < n; i++, j++)
    {
        printf("enter the value number %d: ", j);
        scanf("%d", (ptr+i));
    }
    
    printf("update the number of values: ");
    scanf("%d", &n);

    int * ptr1 = (int *) realloc(ptr, n*sizeof(int));

    if (ptr1 == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("previou address %x and new address %x\n", ptr, ptr1);
    
    for ( i = 0, j = 1; i < n; i++, j++)
    {
        printf("the value number %d is: ", j);
        printf("%d\n", *(ptr1+i));
    }

    free(ptr1);
}
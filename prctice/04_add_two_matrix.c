#include <stdio.h>

int main ()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("1st matrix values: \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter 1st matrix value %d%d: ", i,j);
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("2nd matrix values: \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter 2st matrix value %d%d: ", i,j);
            scanf("%d", &b[i][j]);
        }
        
    }

    printf("1st matrix as follows: \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("2nd matrix as follows: \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("summation of avobe matrix\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}

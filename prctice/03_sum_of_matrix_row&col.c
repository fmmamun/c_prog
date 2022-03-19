#include <stdio.h>

int main()
{
    int a[3][3], i, j, rsum, csum;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter the %d%d of matrix: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for ( i = 0; i < 3; i++)
    {
        rsum = 0;
        csum = 0;
        for ( j = 0; j < 3; j++)
        {
            rsum=rsum+a[i][j];
            csum=csum+a[j][i];
        }
        printf(" rowSum %d columnSum %d\t\n",  rsum, csum);
    }
    
}
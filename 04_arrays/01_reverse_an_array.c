#include <stdio.h>

int main()
{
    int arr[100], temp[100], i=0, j=0, k=0, num=0;

    printf("enter the amount of Number: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = num-1, j = 0; i >= 0; i--, j++)
    {
        temp[j] = arr[i];
    }
    
    for ( k = 0; k < num; k++)
    {
        printf("%d ", temp[k]);
    }
    printf("\n");
}
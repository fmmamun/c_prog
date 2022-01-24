#include <stdio.h>

int main()
{
    int i, arr[100], num, big, small;

    printf("enter the amount of number: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("you have entred: ");
    for ( i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    big = arr[0];
    for ( i = 0; i < num ; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }
    }

    printf("the largest number is: %d\n", big);  

    small = arr[0];
    for ( i = 0; i < num ; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    printf("the smallest number is: %d\n", small);   

    printf("\n");

    
    
}
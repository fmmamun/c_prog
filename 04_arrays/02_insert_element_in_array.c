#include <stdio.h>

int main()
{
    int i, j, arr[100], num, position, newPositionValue;

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

    printf("enter the position to insert new element: ");
    scanf("%d", &position);

    printf("\nenter the new value to insert: ");
    scanf("%d", &newPositionValue);

    for ( i = num-1; i >= position-1; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[position-1] = newPositionValue;

    for ( i = 0; i <= num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}
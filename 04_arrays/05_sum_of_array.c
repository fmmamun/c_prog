#include <stdio.h>

int main()
{
    int i, arr[100], num, sum=0;

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
    
    for ( i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    
    printf("summation of array is: %d", sum);
    printf("\n");

}
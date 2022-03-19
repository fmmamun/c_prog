#include <stdio.h>

int main()
{
    int arr[100], i, j, num, temp, flag;

    printf("enter the number sort element: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("you have entered: ");

    for ( i = 0; i < num; i++)
    {
         printf("%d ", arr[i]);
    }

    printf("\n");

    for ( i = 0; i < num-1; i++)
    {
        flag = 0;
        for ( j = 0; j < num-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
            
        }

        if (flag == 0)
        {
            break;
        }
        
    }
    
    printf("sorted array is: ");

    for ( i = 0; i < num; i++)
    {
         printf("%d ", arr[i]);
    }
    

    printf("\n");
}
#include <stdio.h>

// int main()
// {
//     int num, i, big, c;

//     printf("enter the amount numbers: ");
//     scanf("%d", &num);

//     printf("Enter the element no 1: ");
//     scanf("%d", &big);

//     for ( i = 2; i <= num; i++)
//     {
//         printf("Enter the element no %d: ", i);
//         scanf("%d", &c);

//         if (big < c)
//         {
//             big = c;
//         }
//     }
//     printf("the big number is: %d\n", big);
// }


int main()
{
    int i, j, num, arr[100];

    printf("enter the amount of number: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        printf("enter the number%d ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for ( j = 1; j < num; j++)
    {
        if (arr[0] < arr[j])
        {
            arr[0] = arr[j];
        }        
    }
    printf("the big number is: %d\n", arr[0]);
}
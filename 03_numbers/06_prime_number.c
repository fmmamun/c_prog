#include <stdio.h>

// int main()
// {
//     int num, i, count=0;

//     printf("enter the number of prime numbers required: \n");
//     scanf("%d", &num);

//     for ( i = 2; i < num; i++)
//     {
//         if (num%i == 0)
//         {
//             count++;
//             break;
//         }
        
//     }
    
//     if (count == 0)
//     {
//         printf("prime number\n");
//     }
//     else
//         printf("not prime number\n");
// }


int main()
{
    int num, i=3, j, count;

    printf("enter the number of prime numbers required: \n");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("2 ");
    }
    

    for ( count = 2; count <= num; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
            
        }
        if (j == i)
        {
            printf("%d ", j);
            count++;
        }
  
    }
    printf("\n");
}
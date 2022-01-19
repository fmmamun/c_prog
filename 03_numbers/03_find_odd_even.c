#include <stdio.h>

// int main()
// {
//     int i;
//     for ( i = 0; i < 10; i++)
//     {
//         if (i&1)
//         {
//             printf("%d odd\n", i);
//         }
//         else if(!(i&1))
//             printf("%d even\n", i);
        
        
//     }
// return 0;
// }


int main()
{
    int num, temp;

    printf("enter the number: \n");
    scanf("%d", &num);
    temp=num%2;

    if (temp==0)
    {
        printf("%d is even\n", num);
    }
    else
    printf("%d is odd\n", num);
    return 0;    

}
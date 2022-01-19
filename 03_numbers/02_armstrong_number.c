#include <stdio.h>

// int main()
// {
//     int i, rem, modu, sum;

//     for ( i = 0; i <=100000; i++)
//     {
//         rem = i;
//         sum=0;
//         while (rem != 0)
//         {
//             modu = rem%10;
//             sum = sum + (modu*modu*modu);
//             rem = rem/10;
//         }
//         if (sum == i)
//         printf("%d\n", i);
        
//     }
    
// }

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, sum = 0, c, t, a;

    printf("Enter a number:  ");
    scanf("%d", &n);

    t = n;  // as need to retain the original number
    while(n != 0)
    {
        a = n%10;
        sum += a*a*a;
        n = n/10;
    }

    printf("\n\n\n\t\t\tsum = %d", sum);

    if(sum == t)
        printf("\n\n\t\t%d is an armstrong number\n", t);
    else
        printf("\n\n\t\t%d is not an armstrong number\n", t);

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
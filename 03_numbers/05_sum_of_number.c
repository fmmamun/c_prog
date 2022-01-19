#include <stdio.h>

int main()
{
    int num, i, sum=0, temp;
    printf("enter the amount of Number: \n");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        scanf("%d", &temp);
        sum+=temp;
    }
    printf("summation of N Number: %d\n", sum);
    return 0;    
}
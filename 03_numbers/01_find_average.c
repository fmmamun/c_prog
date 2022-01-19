#include <stdio.h>

int main()
{
    int num, i;
    float sum = 0, store;

    printf("enter how many number for average: \n");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        scanf("%f", &store);
        sum += store;
    }
    
    printf("average is: %.02f\n",(sum/num) );
    return 0;
}
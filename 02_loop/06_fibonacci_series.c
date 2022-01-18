#include <stdio.h>
void fiboni(int num);
void main()
{
    int num;
    printf("enter the number: \n");
    scanf("%d", &num);
    fiboni(num);
}

void fiboni(int num)
{
    int a, b, c, i=3;
    a=0;
    b=1;
    if(num == 1)
    {
        printf("%d", a);
    }

    else if (num >= 2 )
    {
        printf("%d, %d, ",a,b);
        while (i<=num)
        {
            c=a+b;
            printf("%d, ", c);
            a=b;
            b=c;
            i++;
        }   
    }
    printf("\n"); 
}
#include <stdio.h>
void sum(int x, int y);     //function declaration
// start
// void main()
// {
//     sum();                  //function calling
// }

// void sum()                  //function defination
// {
//     int a, b, sum = 0;
//     printf("enter two number: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("sum = %d\n", sum);
// }
// end

//start
void main()
{
    int a, b;
    sum(a, b);
}

void sum(int x, int y)
{
    int sum=0;
    printf("enter two number: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("sum = %d\n", sum);
}
//end
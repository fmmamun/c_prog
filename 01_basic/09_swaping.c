#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("enter x: \n");
    scanf("%d", &x);
    printf("enter y: \n");
    scanf("%d", &y);

    temp=x;
    x=y;
    y=temp;

    printf("now x is : %d and y is : %d\n", x, y);
    return 0;
}
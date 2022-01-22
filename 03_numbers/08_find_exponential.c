#include <stdio.h>

int main()
{
    int n, pw, pw1, value=1;
    printf("enter the number and power\n");
    scanf("%d%d", &n, &pw);

    pw1=pw;

    for ( int i = pw; i > 0; i--)
    {
        value *= n;
    }
    
    // while (pw-- > 0)
    // {
    //     value *= n;
    // }
    
    printf("%d\n", value);
}
#include <stdio.h>


int main ()
{
    // int a=10, b=20;
    // int *x, *y;
    // x=&a;
    // y=&b;
    // printf("x: %d\n", *x);
    // printf("y: %d\n", *y);

    int i, d, a[19]={11,222,55,6,77,88,99};
    int b[17]={9,8,7,6,5,4,3,2,1};
    int *x, *y;
    x = &a[0];
    
    //addition section
    // x = x+2;
    // *x = 8;
    // printf("%d\n",*x);
    // for ( i = 0; a[i] != '\0'; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");


    //subtraction section
    // y = &a[3];
    // printf("%d\n",y-x);
    // printf("%d\n",*x);
    // printf("%d\n",*y);


    //increment and decrement
    // x++;
    printf("%d\n",(*x)++);
    printf("%d\n",*x);
}




// ruls 
// x+2*4
// x+n=p+n*size of data type


// 1012-1000= 12/4= 3

//(*x)++ this will increment valu not pointer
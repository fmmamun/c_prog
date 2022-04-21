#include <stdio.h>

// //funtion with no argument no return type start

// void sum(void); //ther should use void in () because this is no argument
// void main()
// {
//     sum();  //if we want pass argument it will give error
// }

// void sum()
// {
//     int a = 5, b = 5, sum = 0;
//     sum = a + b;
//     printf("sum = %d\n", sum);
// }

// //end



// //funtion with no argument with return type start

// int sum(void); //ther should use void in () because this is no argument
// int main()
// {
//     int receive_return_type;
//     receive_return_type = sum();
//     printf("sum is %d\n", receive_return_type);
// }

// int sum()
// {
//     int a = 5, b = 5, sum = 0;
//     sum = a + b;
//     return sum;
// }

// //end



// //funtion with argument no return type start

// void sum(int, int); //ther should use type data type in () because this is no argument
// void main()
// {
//     int a, b;
//     printf("enter two number: ");
//     scanf("%d %d", &a, &b);
//     sum(a, b);  //pass argument
// }

// void sum(int x, int y)
// {
//     int sum = 0;
//     sum = x + y;
//     printf("sum = %d\n", sum);
// }

// //end




//funtion with argument with return type start

int sum(int, int); 
int main()
{
    int a, b, s=0;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    s = sum(a, b);  //pass argument
    printf("sum = %d\n", s);
}

int sum(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}

//end
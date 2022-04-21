#include <stdio.h>

int average(int[], int);

void main()
{
    int avg;
    int marks[5]={1,2,3,4,5};
    // avg = average(marks);
    avg = average(marks,5);     //in ( marks = array name, 5 = size of array)
    printf("avg = %d\n", avg/5);
}

// int average(int number[])
int average(int number[], int size)
{
    int i, sum = 0;
    for ( i = 0; i < size; i++)
    {
        sum = sum + number[i];
    }
    return sum;
}
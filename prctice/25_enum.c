#include <stdio.h>

void main()
{
    enum weeks_days {sun, mon, tue, wed, thu, fri, sat};

    enum weeks_days test=tue;
    printf("%d\n", test);
    // printf("%d\n", sizeof(test));
}
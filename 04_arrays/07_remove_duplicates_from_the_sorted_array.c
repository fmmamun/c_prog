#include <stdio.h>

int remove_duplicate(int arr[], int num)
{
    printf("%d",num);
    if (num == 0 || num == 1)
    {
        return num;
    }

    int temp[num];
    
    int j = 0;
    
    int i;
    for ( i = 0; i < num-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[num-1];

    for ( i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    return j;
}
int main(){
    int i, num, display;
    printf("enter the number of array: ");
    scanf("%d", &num);

    int arr[num];
    
    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("you have entered: ");
    for ( i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    num = remove_duplicate(arr, num);

    printf("arry after remove duplicates: ");
    for ( i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;    
}

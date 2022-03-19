#include <stdio.h>
#include <string.h>

int main ()
{
    char fname[30], lname[10];
    int flag = 0, i;
    printf("enter the first name: ");
    gets(fname);
    printf("enter the last name: ");
    gets(lname);

    for ( i = 0; fname[i] != '\0' || lname[i] != '\0'; i++)
    {
        if (fname[i] != lname[i])
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag == 1)
    {
        printf("string is not equal\n");
    }
    else
        printf("string is equal\n");
    
    // if (fname == lname)
    // {
    //     printf("string is equal");
    // }
    // else
    //     printf("string is not equal");
    
}
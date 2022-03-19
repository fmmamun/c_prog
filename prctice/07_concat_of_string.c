#include <stdio.h>
#include <string.h>

int main ()
{
    char fname[30], lname[10];
    int lfname, llname, i;
    printf("enter the first name: ");
    gets(fname);
    printf("enter the last name: ");
    gets(lname);

    lfname = strlen(fname);
    llname = strlen(lname);
    printf("%d %d", lfname, llname);
    for ( i = 0; i <= llname; i++)
    {
        fname[lfname+i] = lname[i];
    }
    

    // strcat(fname, lname);
    printf(fname);
}
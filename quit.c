#include <stdio.h>
main ()
{
    char option;
    do
        {
            printf("Enter q to quit: ");
            option = getchar ();
        }
    while (option != 'q');
}

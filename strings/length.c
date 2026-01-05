/*
 * MPCS C Bootcamp
 *
 * Implementation of a function that returns the length of string.
 */

#include <stdio.h>


int len (char *s)
{
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}


int main()
{
    char s[6];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0'; // <- Removing this could cause a segfault

    printf("len=%d\n", len(s));
}

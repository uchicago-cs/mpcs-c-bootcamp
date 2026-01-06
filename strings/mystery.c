/*
 * MPCS C Bootcamp
 *
 * A string mystery function!
 */

#include <stdio.h>


char *mystery (char *s1, char *s2)
{
    while (*s1++ = *s2++);

    return s1;
}


int main()
{
    char *s = "Hello, world!";
    char d[14];

    mystery (d, s);

    printf ("s is %s\n", s);
    printf ("d is %s\n", d);
}

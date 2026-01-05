/*
 * MPCS C Bootcamp
 *
 * A few simple functions (and function calls)
 */

#include <stdio.h>

int add (int x, int y)
{
    int c = x + y;

    return c;
}

void print_number (int x)
{
    printf ("The number is %d\n", x);
}

int main ()
{
    int a = 42, b, c;

    b = add (5, 7);
    c = add (a, b);

    int d = 37;

    print_number (d);
    print_number (42);
}

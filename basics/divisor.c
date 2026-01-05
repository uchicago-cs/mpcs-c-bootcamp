/*
 * MPCS C Bootcamp
 *
 * Find the smallest divisor of a number
 */

#include <stdio.h>

int main ()
{
    int n = 21;

    for (int i = 2; i < n; ++i) {
        printf ("Checking %d...\n", i);
        if ((n % i) == 0) {
            printf ("%d is a divisor of %d\n", i, n);
            break;
        }
    }
}

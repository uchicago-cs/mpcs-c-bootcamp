/*
 * MPCS C Bootcamp
 *
 * Iterating over an array
 */

#include <stdio.h>

int main ()
{
    int a[5] = {37, 40, -36, 1, 2};

    for (int i = 0; i < 5; ++i) {
        if ((a[i] % 2) == 0) {
            printf ("a[%d] (%d) is even\n", i, a[i]);
        } else {
            printf ("a[%d] (%d) is odd\n", i, a[i]);
        }
    }
}

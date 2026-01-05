/*
 * MPCS C Bootcamp
 *
 * Some examples of how pointers and arrays
 * relate to each other
 */

#include <stdio.h>

int main()
{
    int a[3] = {17, 24, 32};

    printf ("*a is %d\n", *a);

    int *p = a;

    printf ("p[1] is %d\n", p[1]);

    p = p + 1;

    printf ("*p is %d\n", *p);

    p = a;

    for (int i=0; i<3; i++) {
        printf ("*(p+%d) is %d\n", i, *(p+i));
        printf ("p[%d] is %d\n", i, p[i]);
    }
}

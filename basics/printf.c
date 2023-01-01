/*
 * MPCS C Bootcamp
 *
 * Sample uses of the printf() function
 */

#include <stdio.h>

int main()
{
    int a=10;
    float x=10.0;

    printf("Hello\n");
    printf("a is %i\n", a);
    printf("a is %i, x/3 is %f\n", a, x/3);
    printf("x/3 is %.2f\n", x/3);
}

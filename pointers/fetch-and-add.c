/*
 * MPCS C Bootcamp
 *
 * Implementation of a "fetch and add" function,
 * first without pointers (fetch_and_add_bad) to
 * show how the value of the first parameter
 * is not updated, and then with pointers (fetch_and_add)
 * to demonstrate how an "output parameter" works.
 */

#include <stdio.h>


int fetch_and_add_bad (int n, int a)
{
    int old = n;
    n += a;
    return old;
}


int fetch_and_add (int *n, int a)
{
    int old = *n;
    *n += a;
    return old;
}


int main ()
{
    int a = 7, b;

    b = fetch_and_add_bad(a, 3);
    printf("a is %d, b is %d\n", a, b);

    b = fetch_and_add(&a, 3);
    printf("a is %d, b is %d\n", a, b);

}

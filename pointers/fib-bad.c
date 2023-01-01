/*
 * MPCS C Bootcamp
 *
 * (Incorrect) implementation of a function that 
 * generates the first N fibonacci numbers and 
 * returns them as an array of integers.
 * 
 * Calling this function will cause a segfault, because
 * we are returning a stack-allocated array. 
 */

#include <stdio.h>

int *generate_fibonacci(int n)
{
    int fib[n];

    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib;
}

int main()
{
    int n, *fib;
    printf("Enter a number: ");
    scanf("%i", &n);

    fib = generate_fibonacci(n);

    for(int i=0; i<n; i++)
    {
        printf("fib[%i] = %i\n", i, fib[i]);
    }
}
/*
 * MPCS C Bootcamp
 *
 * Find the smallest divisor of a number
 */

#include <stdio.h>

int main()
{
    int n=21;
    for(int i=2; i<n; i++)
    {
        printf("Checking %i...\n", i);	
        if(n%i == 0)
        {
            printf("%i is a divisor of %i\n", i, n);
            break;
        }	
    }
}

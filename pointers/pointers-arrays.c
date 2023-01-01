
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

    printf("*a is %i\n", *a);

    int *p = a;

	printf("p[1] is %i\n", p[1]);

	p = p + 1;

    printf("*p is %i\n", *p);

	p = a;

	for(int i=0; i<3; i++)
	{
        printf("*(p+%i) is %i\n", i, *(p+i));
        printf("p[%i] is %i\n", i, p[i]);
    }
}

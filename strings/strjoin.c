/*
 * MPCS C Bootcamp
 *
 * Exercise: Implement a function that takes two strings and 
 * produces a new string containing the concatenation of s1 
 * followed by s2 (the return value is that new string)
 */

#include <stdio.h>
#include <string.h>


char* strjoin(char *s1, char *s2)
{
	/* Your code goes here */

    /* Replace NULL with the appropriate return value*/
	return NULL;
}


int main()
{
    char *s1 = "abcdef";
    char *s2 = "ghijklmnop";
    char *d;

    d = strjoin(s1, s2);

    printf("s1 + s2 = %s\n", d);
    printf("len(s1 + s2) = %li\n", strlen(d));
}

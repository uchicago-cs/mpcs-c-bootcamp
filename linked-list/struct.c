#include <stdlib.h>

struct point2d
{
    float x;
    float y;
};

int main()
{
    struct point2d p1, *p2;

	p1.x = 5.3;
	p1.y = 7.2;

	p2 = calloc(1, sizeof(struct point2d));
	(*p2).x = 10.7;
	p2->y = 29.7;
}
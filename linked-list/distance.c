#include <math.h>
#include <stdio.h>

typedef struct point2d {
    float x;
    float y;
} point2d_t;

float distance (point2d_t *p1, point2d_t *p2)
{
	float sqx = pow(p1->x - p2->x, 2);
	float sqy = pow(p1->y - p2->y, 2);

	return sqrt(sqx+sqy);
}

int main ()
{
    point2d_t p1, p2;

    p1.x = 0.0;
    p1.y = 0.0;

    p2.x = 1.0;
    p2.y = 1.0;

    float dist = distance(&p1, &p2);

    printf("The distance is %.4f\n", dist);
}
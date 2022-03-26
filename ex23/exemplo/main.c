#include <stdio.h>
// #include <stdlib.h>
#include "tracing.h"

void Point_print(Point* self)
{
	printf("%f %f\n", self->x * 2, self->y * 2);
}

int	main()
{
	Point a = {1.0, 2.0};
	Point_print(&a);
}

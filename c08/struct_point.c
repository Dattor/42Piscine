#include "struct_point.h"
#include <stdio.h>

void	set_point(t_point *point_p)
{
	point_p->x = 42;
	//point->y = 21;
	(*point_p).y = 21;
	printf("vypis struktury pres pointer: %d, %d\n", (*point_p).x, point_p->y);
}

int		main(void)
{
	t_point	point;
	struct s_point ppoint;

	set_point(&point);
	set_point(&ppoint);

	printf("vypis struktury typedef: %d, %d\n", point.x, point.y);
	point.x = 33;
	printf("vypis struktury typedef: %d, %d\n", point.x, point.y);
	ppoint.y = 11;
	printf("vypis struktury: %d, %d\n", ppoint.x, ppoint.y);
	
	return (0);
	
}

#include "../include/push_swap.h"

void			swap_value(int *value1, int *value2)
{
	int			temp;

	temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}

t_part			init_count(void)
{
	t_part		part;

	part.max_count = 0;
	part.mid_count = 0;
	part.min_count = 0;
	part.big_pivot = 0;
	part.small_pivot = 0;
	return (part);
}

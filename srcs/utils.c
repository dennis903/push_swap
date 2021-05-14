#include "../include/push_swap.h"

void			swap_value(int *value1, int *value2)
{
	int			temp;

	temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}
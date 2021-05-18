/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:39:02 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:51:22 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			bubble_sort(int **array, int range)
{
	int			i;
	int			j;

	i = 0;
	while (i < range - 1)
	{
		j = 0;
		while (j < range - 1 - i)
		{
			if ((*array)[j] > (*array)[j + 1])
				swap_value(&(*array)[j], &(*array)[j + 1]);
			j++;
		}
		i++;
	}
}

int				*sort_temporary(t_stack **stack, int range)
{
	int			*result;
	t_stack		*temp;
	int			i;

	i = 0;
	result = (int *)malloc(sizeof(int) * range);
	temp = *stack;
	while (i < range)
	{
		result[i] = temp->value;
		temp = temp->next;
		i++;
	}
	bubble_sort(&result, range);
	return (result);
}

int				choose_small_pivot(int *sorted, int range)
{
	int			small_pivot;
	int			choose_index;

	choose_index = range / 3;
	small_pivot = sorted[choose_index];
	return (small_pivot);
}

int				choose_big_pivot(int *sorted, int range)
{
	int			big_pivot;
	int			choose_index;

	choose_index = (range / 3) * 2;
	big_pivot = sorted[choose_index];
	return (big_pivot);
}

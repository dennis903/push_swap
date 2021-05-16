/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:42:00 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 15:42:01 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int			find_max_index(t_stack **stack)
{
	int		i;
	int		max;
	int		max_index;
	t_stack	*temp;

	temp = *stack;
	max = temp->value;
	max_index = 0;
	i = 0;
	while (temp)
	{
		if (temp->value > max)
		{
			max_index = i;
			max = temp->value;
		}
		i++;
		temp = temp->next;
	}
	return (max_index);
}

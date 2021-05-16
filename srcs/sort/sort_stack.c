/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 19:28:23 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 14:26:21 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_part			a_to_b_part(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;
	int			i;

	part = init_count();
	select_pivot(&part.big_pivot, &part.small_pivot, a_stack);
	i = 0;
	while (i < range)
	{
		if ((*a_stack)->value >= part.big_pivot)
		{
			rotate_a(a_stack);
			part.max_count++;
		}
		else
		{
			push_b(b_stack, a_stack);
			part.min_count++;
			if ((*b_stack)->value > part.small_pivot)
			{
				rotate_b(b_stack);
				part.mid_count++;
			}
		}
		i++;
	}
	reverse_stack(part, a_stack, b_stack);
	return (part);
}

void			sort_a_to_b(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;

	if (check_return_condition(a_stack, range))
		return ;
	part = a_to_b_part(a_stack, b_stack, range);
}
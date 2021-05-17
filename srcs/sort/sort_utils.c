/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:25:11 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 15:51:31 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		select_pivot(int *big, int *small, int range, t_stack **stack)
{
	int		*sorted_temp;

	sorted_temp = sort_temporary(stack, range);
	*small = choose_small_pivot(sorted_temp, range);
	*big = choose_big_pivot(sorted_temp, range);
	free(sorted_temp);
}

void		reverse_a_stack(t_part part, t_stack **a_stack, t_stack **b_stack)
{
	while (part.max_count > 0 && part.mid_count > 0)
	{
		same_cmd(a_stack, b_stack, "rrr");
		part.max_count--;
		part.mid_count--;
	}
	while (part.max_count > 0)
	{
		a_cmd(a_stack, "rra");
		part.max_count--;
	}
	while (part.mid_count > 0)
	{
		b_cmd(b_stack, "rrb");
		part.mid_count--;
	}
}

void		reverse_b_stack(t_part part, t_stack **a_stack, t_stack **b_stack)
{
	while (part.mid_count > 0 && part.min_count > 0)
	{
		same_cmd(a_stack, b_stack, "rrr");
		part.mid_count--;
		part.min_count--;
	}
	while (part.mid_count > 0)
	{
		a_cmd(a_stack, "rra");
		part.mid_count--;
	}
	while (part.min_count > 0)
	{
		b_cmd(b_stack, "rrb");
		part.min_count--;
	}
}
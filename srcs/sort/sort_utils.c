/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:25:11 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 14:43:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		select_pivot(int *big_pivot, int *small_pivot, t_stack **stack)
{
	*big_pivot = (*stack)->value;
	*small_pivot = (*stack)->next->value;
	if (*small_pivot > *big_pivot)
		swap_value(big_pivot, small_pivot);
}

void		reverse_stack(t_part part, t_stack **a_stack, t_stack **b_stack)
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
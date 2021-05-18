/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:06:10 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:50:58 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		start_sort(t_stack **a_stack, t_stack **b_stack)
{
	int		range;

	range = stack_lstsize(*a_stack);
	(*a_stack)->early_idx = range;
	if (range == 5)
		sort_five_value(a_stack, b_stack);
	else if (range == 4)
		sort_four_value(a_stack, b_stack);
	else
		sort_a_to_b(a_stack, b_stack, range);
	if (*a_stack)
		stack_lstclear(a_stack, free);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:06:10 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 19:30:28 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		start_sort(t_stack **a_stack, t_stack **b_stack)
{
	int		range;

	range = stack_lstsize(*a_stack);
	if (range == 5)
		sort_five_value(a_stack, b_stack);
	else if (range == 4)
		sort_four_value(a_stack, b_stack);
	else
		sort_a_to_b(a_stack, b_stack, range);
}
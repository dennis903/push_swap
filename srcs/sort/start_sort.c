/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:06:10 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 18:47:20 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		start_sort(t_stack **a_stack, t_stack **b_stack)
{
	int		range;

	range = stack_lstsize(*a_stack);
	sort_a_to_b(a_stack, b_stack, range);
	// while (*a_stack)
	// {
	// 	printf("%d ", (*a_stack)->value);
	// 	*a_stack = (*a_stack)->next;
	// }
	// printf("\n");
}
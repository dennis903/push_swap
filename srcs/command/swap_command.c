/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:07:50 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 15:34:22 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			swap_a(t_stack **a_stack)
{
	int			temp;

	if (!(*a_stack))
		return ;
	if (!((*a_stack)->next))
		return ;
	temp = (*a_stack)->value;
	(*a_stack)->value = (*a_stack)->next->value;
	(*a_stack)->next->value = temp;
}

void			swap_b(t_stack **b_stack)
{
	int			temp;

	if (!(*b_stack))
		return ;
	if (!((*b_stack)->next))
		return ;
	temp = (*b_stack)->value;
	(*b_stack)->value = (*b_stack)->next->value;
	(*b_stack)->next->value = temp;
}

void			swap_s(t_stack **a_stack, t_stack **b_stack)
{
	swap_a(a_stack);
	swap_b(b_stack);
}

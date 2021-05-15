/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:52:41 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/15 19:26:15 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			rotate_a(t_stack **a_stack)
{
	t_stack		*temp;

	if (!(*a_stack))
		return ;
	temp = *a_stack;
	while (temp->next)
	{
		swap_value(&(temp->value), &(temp->next->value));
		temp = temp->next;
	}
}

void			rotate_b(t_stack **b_stack)
{
	t_stack		*temp;

	if (!(*b_stack))
		return ;
	temp = *b_stack;
	while (temp->next)
	{
		swap_value(&(temp->value), &(temp->next->value));
		temp = temp->next;
	}
}

void			rotate_r(t_stack **a_stack, t_stack **b_stack)
{
	rotate_a(a_stack);
	rotate_b(b_stack);
}

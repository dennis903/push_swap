/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:10:27 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 17:26:49 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			reverse_rotate_a(t_stack **a_stack)
{
	t_stack		*temp;

	if (!(*a_stack))
		return ;
	temp = *a_stack;
	while (temp->next)
		temp = temp->next;
	while (temp->prev)
	{
		swap_value(&(temp->value), &(temp->prev->value));
		temp = temp->prev;
	}
}

void			reverse_rotate_b(t_stack **b_stack)
{
	t_stack		*temp;

	if (!(*b_stack))
		return ;
	temp = *b_stack;
	while (temp->next)
		temp = temp->next;
	while (temp->prev)
	{
		swap_value(&(temp->value), &(temp->prev->value));
		temp = temp->prev;
	}
}

void			reverse_rotate_s(t_stack **a_stack, t_stack **b_stack)
{
	reverse_rotate_a(a_stack);
	reverse_rotate_b(b_stack);
}
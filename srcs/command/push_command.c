/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:07:15 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 17:11:56 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			push_a(t_stack **a_stack, t_stack **b_stack)
{
	t_stack		*temp;

	if (!(*b_stack))
		return ;
	stack_lstadd_front(a_stack, stack_lstnew((*b_stack)->value));
	if (!((*b_stack)->next))
		stack_lstclear(b_stack, free);
	else
	{
		temp = (*b_stack)->next;
		stack_lstdelone(*b_stack, free);
		*b_stack = temp;
	}
}

void			push_b(t_stack **b_stack, t_stack **a_stack)
{
	t_stack		*temp;

	if (!(*a_stack))
		return ;
	stack_lstadd_front(b_stack, stack_lstnew((*a_stack)->value));
	if (!((*a_stack)->next))
		stack_lstclear(a_stack, free);
	else
	{
		temp = (*a_stack)->next;
		stack_lstdelone(*a_stack, free);
		*a_stack = temp;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:07:15 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 16:02:34 by hyeolee          ###   ########.fr       */
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
	{
	}
}
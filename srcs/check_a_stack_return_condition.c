/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_a_stack_return_condition.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 20:12:46 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:47:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		sort_a_three_value(t_stack **a_stack)
{
	if (case2(*a_stack))
	{
		a_cmd(a_stack, "sa");
		a_cmd(a_stack, "ra");
	}
	else if (case3(*a_stack))
		a_cmd(a_stack, "sa");
	else if (case4(*a_stack))
		a_cmd(a_stack, "rra");
	else if (case5(*a_stack))
		a_cmd(a_stack, "ra");
	else if (case6(*a_stack))
	{
		a_cmd(a_stack, "sa");
		a_cmd(a_stack, "rra");
	}
}

static void	sort_a_stack(t_stack **a_stack, int range)
{
	if (range == 2)
	{
		if ((*a_stack)->value > (*a_stack)->next->value)
			a_cmd(a_stack, "sa");
	}
	else if (stack_lstsize(*a_stack))
		sort_a_three_value(a_stack);
}

int			check_a_sorted(t_stack *a_stack, int range)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = a_stack;
	while (i < range - 1)
	{
		if (temp->value > temp->next->value)
			return (FAILED);
		i++;
		temp = temp->next;
	}
	return (SUCCESS);
}

int			check_a_stack_return_condition(t_stack **a_stack, int range)
{
	if (check_a_sorted(*a_stack, range))
		return (SUCCESS);
	else if (range < 3 || stack_lstsize(*a_stack) == 3)
	{
		sort_a_stack(a_stack, range);
		return (SUCCESS);
	}
	return (FAILED);
}

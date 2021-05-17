/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_b_stack_return_condition.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:39:49 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 17:48:06 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sort_b_three_value(t_stack **b_stack)
{
	if (case1(*b_stack))
	{
		b_cmd(b_stack, "sb");
		b_cmd(b_stack, "rrb");
	}
	else if (case2(*b_stack))
		b_cmd(b_stack, "rb");
	else if (case3(*b_stack))
		b_cmd(b_stack, "rrb");
	else if (case4(*b_stack))
		b_cmd(b_stack, "sb");
	else if (case5(*b_stack))
	{
		b_cmd(b_stack, "sb");
		b_cmd(b_stack, "rb");
	}
}

static void	sort_b_stack(t_stack **b_stack, int range)
{
	if (range == 2)
	{
		if ((*b_stack)->value < (*b_stack)->next->value)
			b_cmd(b_stack, "sb");
	}
	else if (stack_lstsize(*b_stack) == 3)
		sort_b_three_value(b_stack);
}

static int	check_b_sorted(t_stack *b_stack, int range)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = b_stack;
	while (i < range - 1)
	{
		if (temp->value < temp->next->value)
			return (FAILED);
		temp = temp->next;
		i++;
	}
	return (SUCCESS);
}

int			check_b_stack_return_condition(t_stack **b_stack, int range)
{
	if (check_b_sorted(*b_stack, range))
		return (SUCCESS);
	else if (range < 3 || stack_lstsize(*b_stack) == 3)
	{
		sort_b_stack(b_stack, range);
		return (SUCCESS);
	}
	return (FAILED);
}
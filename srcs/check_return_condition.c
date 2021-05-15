/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_return_condition.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 20:12:46 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/15 21:36:02 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	find_max_index(t_stack **a_stack)
{
	int		i;
	int		max;
	int		max_index;
	t_stack	*temp;

	temp = *a_stack;
	max = temp->value;
	max_index = 0;
	i = 0;
	while (temp)
	{
		if (temp->value > max)
		{
			max_index = i;
			max = temp->value;
		}
		i++;
		temp = temp->next;
	}
	return (max_index);
}

static void	sort_three_value(t_stack **a_stack)
{
	int		max_index;
	t_stack	*temp;

	temp = *a_stack;
	max_index = find_max_index(a_stack);
	if (max_index == 0)
	{
		a_cmd(a_stack, "sa");
		a_cmd(a_stack, "rra");
	}
	else if (max_index == 1)
		a_cmd(a_stack, "rra");
	else if (max_index == 2)
		a_cmd(a_stack, "sa");
}

static void	sort_a_stack(t_stack **a_stack, int range)
{
	if (range == 2)
	{
		if ((*a_stack)->value > (*a_stack)->next->value)
			a_cmd(a_stack, "sa");
	}
	else if (range == 3)
		sort_three_value(a_stack);
}

static int	check_sorted(t_stack *a_stack)
{
	t_stack	*temp;

	temp = a_stack;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (FAILED);
		temp = temp->next;
	}
	return (SUCCESS);
}

int			check_return_condition(t_stack **a_stack, int range)
{
	if (check_sorted(*a_stack))
		return (SUCCESS);
	else if (range <= 3)
	{
		sort_a_stack(a_stack, range);
		return (SUCCESS);
	}
	return (FAILED);
}

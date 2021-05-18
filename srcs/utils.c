/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:42:00 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:49:29 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void		swap_value(int *value1, int *value2)
{
	int		temp;

	temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}

t_part		init_count(void)
{
	t_part	part;

	part.max_count = 0;
	part.mid_count = 0;
	part.min_count = 0;
	part.big_pivot = 0;
	part.small_pivot = 0;
	return (part);
}

int			find_max_index(t_stack **stack)
{
	int		i;
	int		max;
	int		max_index;
	t_stack	*temp;

	temp = *stack;
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

void		seperate_a_to_b(t_stack **a_stack, t_stack **b_stack, t_part *part)
{
	if ((*a_stack)->value > part->big_pivot)
	{
		a_cmd(a_stack, "ra");
		part->max_count++;
	}
	else
	{
		push_cmd(a_stack, b_stack, "pb");
		part->min_count++;
		if ((*b_stack)->value > part->small_pivot)
		{
			b_cmd(b_stack, "rb");
			part->mid_count++;
		}
	}
}

void		seperate_b_to_a(t_stack **a_stack, t_stack **b_stack, t_part *part)
{
	if ((*b_stack)->value < part->small_pivot)
	{
		b_cmd(b_stack, "rb");
		part->min_count++;
	}
	else
	{
		push_cmd(a_stack, b_stack, "pa");
		part->max_count++;
		if ((*a_stack)->value < part->big_pivot)
		{
			a_cmd(a_stack, "ra");
			part->mid_count++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 19:28:23 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 19:30:44 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static t_part	b_to_a_part(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;
	t_stack		*temp;
	int			i;

	part = init_count();
	select_pivot(&part.big_pivot, &part.small_pivot, range, b_stack);
	i = 0;
	while (i < range)
	{
		seperate_b_to_a(a_stack, b_stack, &part);
		i++;
	}
	sort_a_to_b(a_stack, b_stack, part.max_count - part.mid_count);
	reverse_b_stack(part, a_stack, b_stack);
	return (part);
}

static t_part	a_to_b_part(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;
	int			i;

	part = init_count();
	select_pivot(&part.big_pivot, &part.small_pivot, range, a_stack);
	i = 0;
	while (i < range)
	{
		seperate_a_to_b(a_stack, b_stack, &part);
		i++;
	}
	reverse_a_stack(part, a_stack, b_stack);
	return (part);
}

void			sort_b_to_a(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;

	if (check_b_stack_return_condition(b_stack, range))
	{
		while (range > 0)
		{
			push_cmd(a_stack, b_stack, "pa");
			range--;
		}
		return ;
	}
	part = b_to_a_part(a_stack, b_stack, range);
	sort_a_to_b(a_stack, b_stack, part.mid_count);
	sort_b_to_a(a_stack, b_stack, part.min_count);
}

void			sort_a_to_b(t_stack **a_stack, t_stack **b_stack, int range)
{
	t_part		part;
	t_stack		*temp;

	if (check_a_stack_return_condition(a_stack, range))
		return ;
	part = a_to_b_part(a_stack, b_stack, range);
	sort_a_to_b(a_stack, b_stack, part.max_count);
	sort_b_to_a(a_stack, b_stack, part.mid_count);
	sort_b_to_a(a_stack, b_stack, part.min_count - part.mid_count);
}

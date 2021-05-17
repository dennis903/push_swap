/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:29:44 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 20:42:00 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int		select_minimal_value(t_stack **a_stack)
{
	int			*sorted_temp;
	int			minimal;

	sorted_temp = sort_temporary(a_stack, 4);
	minimal = sorted_temp[0];
	return (minimal);
}

void			sort_four_value(t_stack **a_stack, t_stack **b_stack)
{
	int			minimal;
	int			i;

	if (check_a_sorted(*a_stack, 4))
		return ;
	minimal = select_minimal_value(a_stack);
	i = 0;
	while (i < 4)
	{
		if ((*a_stack)->value == minimal)
			push_cmd(a_stack, b_stack, "pb");
		else
			a_cmd(a_stack, "ra");
		i++;
	}
	sort_a_three_value(a_stack);
	push_cmd(a_stack, b_stack, "pa");
}
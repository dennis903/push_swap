/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:48:39 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 20:37:37 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void		select_minimal_values(t_stack **a_stack, int *minimal)
{
	int			*sorted_temp;

	sorted_temp = sort_temporary(a_stack, 5);
	minimal[0] = sorted_temp[0];
	minimal[1] = sorted_temp[1];
	free(sorted_temp);
}

void			sort_five_value(t_stack **a_stack, t_stack **b_stack)
{
	int			mini[2];
	int			i;

	if (check_a_sorted(*a_stack, 5))
		return ;
	select_minimal_values(a_stack, mini);
	i = 0;
	while (i < 5)
	{
		if ((*a_stack)->value == mini[0] || (*a_stack)->value == mini[1])
			push_cmd(a_stack, b_stack, "pb");
		else
			a_cmd(a_stack, "ra");
		i++;
	}
	sort_a_three_value(a_stack);
	if ((*b_stack)->value < (*b_stack)->next->value)
		b_cmd(b_stack, "sb");
	push_cmd(a_stack, b_stack, "pa");
	push_cmd(a_stack, b_stack, "pa");
}

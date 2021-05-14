/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:55:47 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 21:03:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			exec_command(t_stack **a_stack, t_stack **b_stack, char *cmd)
{
	if (ft_strcmp(cmd, "sa") == 0)
		swap_a(a_stack);
	else if (ft_strcmp(cmd, "sb") == 0)
		swap_b(b_stack);
	else if (ft_strcmp(cmd, "ss") == 0)
		swap_s(a_stack, b_stack);
	else if (ft_strcmp(cmd, "pa") == 0)
		push_a(a_stack, b_stack);
	else if (ft_strcmp(cmd, "pb") == 0)
		push_b(b_stack, a_stack);
	else if (ft_strcmp(cmd, "rra") == 0)
		reverse_rotate_a(a_stack);
	else if (ft_strcmp(cmd, "rrb") == 0)
		reverse_rotate_b(b_stack);
	else if (ft_strcmp(cmd, "rrs") == 0)
		reverse_rotate_s(a_stack, b_stack);
	else if (ft_strcmp(cmd, "ra") == 0)
		rotate_a(a_stack);
	else if (ft_strcmp(cmd, "rb") == 0)
		rotate_b(b_stack);
	else if (ft_strcmp(cmd, "rs") == 0)
		rotate_s(a_stack, b_stack);

}
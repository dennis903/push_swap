/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:55:47 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/15 20:30:58 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void			a_cmd(t_stack **a_stack, char *cmd)
{
	if (ft_strcmp(cmd, "sa") == 0)
		swap_a(a_stack);
	else if (ft_strcmp(cmd, "rra") == 0)
		reverse_rotate_a(a_stack);
	else if (ft_strcmp(cmd, "ra") == 0)
		rotate_a(a_stack);
	ft_putstr(cmd);
	ft_putstr("\n");
}

void			b_cmd(t_stack **b_stack, char *cmd)
{
	if (ft_strcmp(cmd, "sb") == 0)
		swap_b(b_stack);
	else if (ft_strcmp(cmd, "rb") == 0)
		rotate_b(b_stack);
	else if (ft_strcmp(cmd, "rrb") == 0)
		reverse_rotate_b(b_stack);
	ft_putstr(cmd);
	ft_putstr("\n");
}

void			same_cmd(t_stack **a_stack, t_stack **b_stack, char *cmd)
{
	if (ft_strcmp(cmd, "ss") == 0)
		swap_s(a_stack, b_stack);	
	else if (ft_strcmp(cmd, "ss") == 0)
		swap_s(a_stack, b_stack);
	else if (ft_strcmp(cmd, "rrr") == 0)
		reverse_rotate_r(a_stack, b_stack);
	else if (ft_strcmp(cmd, "rr") == 0)
		rotate_r(a_stack, b_stack);
	ft_putstr(cmd);
	ft_putstr("\n");
}

void			push_cmd(t_stack **a_stack, t_stack **b_stack, char *cmd)
{
	if (ft_strcmp(cmd, "pa") == 0)
		push_a(a_stack, b_stack);
	else if (ft_strcmp(cmd, "pb") == 0)
		push_b(b_stack, a_stack);
	ft_putstr(cmd);
	ft_putstr("\n");
}

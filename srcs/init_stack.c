/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:53:48 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 14:56:42 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void			init_a_stack(t_stack **a_stack, int argc, char **argv)
{
	int			count_argv;
	int			i;

	count_argv = argc - 1;
	i = 1;
	while (i <= count_argv)
	{
		stack_lstadd_back(a_stack, stack_lstnew(ft_atoi(argv[i])));
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:18 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 19:35:12 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int				main(int argc, char *argv[])
{
	t_stack		*a_stack;
	t_stack		*b_stack;

	a_stack = NULL;
	b_stack = NULL;
	if (!(check_valid_argument(argc, argv)))
		write(1, "Error in argument\n", ft_strlen("Error in argument\n"));
	else if (argc > 1)
	{
		init_a_stack(&a_stack, argc, argv);
		start_sort(&a_stack, &b_stack);
	}
	return (0);
}
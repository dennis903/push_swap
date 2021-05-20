/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:18 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 16:26:45 by hyeolee          ###   ########.fr       */
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
		write(1, "Error\n", ft_strlen("Error\n"));
	else if (argc > 1)
	{
		init_a_stack(&a_stack, argc, argv);
		start_sort(&a_stack, &b_stack);
	}
	return (0);
}

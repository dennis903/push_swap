/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:56:18 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/17 14:31:46 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void			print_a(t_stack **a_stack)
{
	t_stack		*temp;

	temp = *a_stack;
	printf("a_stack :");
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

void			print_b(t_stack **b_stack)
{
	t_stack		*temp;

	temp = *b_stack;
	printf("b_stack :");
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

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
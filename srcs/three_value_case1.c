/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_value_case1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:11:20 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 17:08:04 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int				case1(t_stack *stack)
{
	if (stack->value < stack->next->value)
		if (stack->value < stack->next->next->value)
			return (SUCCESS);
	return (FAILED);
}

int				case2(t_stack *stack)
{
	if (stack->value < stack->next->value)
		if (stack->value < stack->next->next->value)
			if (stack->next->value > stack->next->next->value)
				return (SUCCESS);
	return (FAILED);
}

int				case3(t_stack *stack)
{
	if (stack->value > stack->next->value)
		if (stack->value < stack->next->next->value)
				return (SUCCESS);
	return (FAILED);
}

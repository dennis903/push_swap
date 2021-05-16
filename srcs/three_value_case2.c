/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_value_case2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 16:11:23 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/16 17:06:40 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int				case4(t_stack *stack)
{
	if (stack->value < stack->next->value)
		if (stack->value > stack->next->next->value)
			return (SUCCESS);
	return (FAILED);
}

int				case5(t_stack *stack)
{
	if (stack->value > stack->next->value)
		if (stack->value > stack->next->next->value)
			if (stack->next->value < stack->next->next->value)
				return (SUCCESS);
	return (FAILED);
}

int				case6(t_stack *stack)
{
	if (stack->value > stack->next->value)
		if (stack->value > stack->next->next->value)
			if (stack->next->value > stack->next->next->value)
				return (SUCCESS);
	return (FAILED);
}
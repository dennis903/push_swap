/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:52:05 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 14:52:07 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack		*stack_lstnew(int value)
{
	t_stack	*new;

	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	new->value = value;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lstadd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:52:20 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:53:07 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		stack_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (lst == NULL)
		return ;
	if ((*lst) && new)
	{
		node = *lst;
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;
	}
	else
		*lst = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lstadd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:11:30 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 17:11:31 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		stack_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (*lst && new)
	{
		new->next = *lst;
		(*lst)->prev = new;
		*lst = new;
	}
	else
		*lst = new;
}

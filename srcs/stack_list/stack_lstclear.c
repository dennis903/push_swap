/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:06:12 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 15:53:45 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		stack_lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		stack_lstdelone(*lst, del);
		*lst = node;
	}
}

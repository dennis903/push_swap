#include "../../include/push_swap.h"

void		stack_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	new->next = *lst;
	(*lst)->prev = new;
	*lst = new;
}

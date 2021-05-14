#include "../../include/push_swap.h"

void	stack_lstdelone(t_stack *lst, void (*del)(void *))
{
	del(lst);
}

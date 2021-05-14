#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define SUCCESS 1
# define FAILED 0
# define INT_MAX 2147483648
# define INT_MIN -2147483647
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct		s_stack
{
	int				value;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

//check_valid_argument.c
int					check_valid_argument(int argc, char **argv);
//init_stack.c
void				init_a_stack(t_stack **a_stack, int argc, char **argv);
//stack_lstadd_back.c
void				stack_lstadd_back(t_stack **lst, t_stack *new);
//stack_lstadd_front.c
void				stack_lstadd_front(t_stack **lst, t_stack *new);
//stack_lstnew.c
t_stack				*stack_lstnew(int value);
//stack_lstclear.c
void				stack_lstclear(t_list **lst, void (*del)(void *));
//stack_lstdelone.c
void				stack_lstdelone(t_stack *lst, void (*del)(void *));
//swap_command.c
void				swap_a(t_stack **a_stack);
void				swap_b(t_stack **b_stack);
void				swap_s(t_stack **a_stack, t_stack **b_stack);
//push_command.c
void				push_a(t_stack **a_stack, t_stack **b_stack);
void				push_b(t_stack **b_stack, t_stack **a_stack);
#endif
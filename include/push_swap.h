/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:20:35 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/15 19:46:47 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void				stack_lstclear(t_stack **lst, void (*del)(void *));
//stack_lstdelone.c
void				stack_lstdelone(t_stack *lst, void (*del)(void *));
//stack_lstsize.c
int					stack_lstsize(t_stack *lst);
//swap_command.c
void				swap_a(t_stack **a_stack);
void				swap_b(t_stack **b_stack);
void				swap_s(t_stack **a_stack, t_stack **b_stack);
//push_command.c
void				push_a(t_stack **a_stack, t_stack **b_stack);
void				push_b(t_stack **b_stack, t_stack **a_stack);
//rotate_command.c
void				rotate_a(t_stack **a_stack);
void				rotate_b(t_stack **b_stack);
void				rotate_r(t_stack **a_stack, t_stack **b_stack);
//reverse_rotate_command.c
void				reverse_rotate_a(t_stack **a_stack);
void				reverse_rotate_b(t_stack **b_stack);
void				reverse_rotate_r(t_stack **a_stack, t_stack **b_stack);
//utils.c
void				swap_value(int *value1, int *value2);
//exec_command.c
void				exec_command(t_stack **a_stack, t_stack **b_stack,
char *cmd);
//start_sort.c
void				start_sort(t_stack **a_stack, t_stack **b_stack);
//sort_stack.c
void				sort_a_to_b(t_stack **a_stack, t_stack **b_stack,
int range);
#endif

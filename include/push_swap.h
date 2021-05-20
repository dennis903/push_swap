/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:20:35 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/18 16:20:58 by hyeolee          ###   ########.fr       */
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
	int				early_idx;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_part
{
	int				max_count;
	int				mid_count;
	int				min_count;
	int				big_pivot;
	int				small_pivot;
}					t_part;
int					check_valid_argument(int argc, char **argv);
void				init_a_stack(t_stack **a_stack, int argc, char **argv);
void				stack_lstadd_back(t_stack **lst, t_stack *new);
void				stack_lstadd_front(t_stack **lst, t_stack *new);
t_stack				*stack_lstnew(int value);
void				stack_lstclear(t_stack **lst, void (*del)(void *));
void				stack_lstdelone(t_stack *lst, void (*del)(void *));
int					stack_lstsize(t_stack *lst);
void				swap_a(t_stack **a_stack);
void				swap_b(t_stack **b_stack);
void				swap_s(t_stack **a_stack, t_stack **b_stack);
void				push_a(t_stack **a_stack, t_stack **b_stack);
void				push_b(t_stack **b_stack, t_stack **a_stack);
void				rotate_a(t_stack **a_stack);
void				rotate_b(t_stack **b_stack);
void				rotate_r(t_stack **a_stack, t_stack **b_stack);
void				reverse_rotate_a(t_stack **a_stack);
void				reverse_rotate_b(t_stack **b_stack);
void				reverse_rotate_r(t_stack **a_stack, t_stack **b_stack);
void				swap_value(int *value1, int *value2);
t_part				init_count(void);
int					find_max_index(t_stack **stack);
void				seperate_a_to_b(t_stack **a_stack, t_stack **b_stack,
t_part *part);
void				seperate_b_to_a(t_stack **a_stack, t_stack **b_stack,
t_part *part);
void				a_cmd(t_stack **a_stack, char *cmd);
void				b_cmd(t_stack **b_stack, char *cmd);
void				push_cmd(t_stack **a_stack, t_stack **b_stack,
char *cmd);
void				same_cmd(t_stack **a_stack, t_stack **b_stack,
char *cmd);
void				start_sort(t_stack **a_stack, t_stack **b_stack);
void				sort_a_to_b(t_stack **a_stack, t_stack **b_stack,
int range);
void				sort_b_to_a(t_stack **a_stack, t_stack **b_stack,
int range);
void				select_pivot(int *big, int *small, int range,
t_stack **stack);
void				reverse_a_stack(t_part part,
t_stack **a_stack, t_stack **b_stack);
void				reverse_b_stack(t_part part,
t_stack **a_stack, t_stack **b_stack);
int					is_a_sorted_clear(t_stack *a_stack, int big_pivot,
int range);
int					is_b_sorted_clear(t_stack *b_stack);
int					*sort_temporary(t_stack **stack, int range);
int					choose_small_pivot(int *sorted, int range);
int					choose_big_pivot(int *sorted, int range);
int					check_a_stack_return_condition(t_stack **a_stack,
int range);
void				sort_a_three_value(t_stack **a_stack);
int					check_a_sorted(t_stack *a_stack, int range);
int					check_b_stack_return_condition(t_stack **b_stack,
int range);
int					case1(t_stack *stack);
int					case2(t_stack *stack);
int					case3(t_stack *stack);
int					case4(t_stack *stack);
int					case5(t_stack *stack);
int					case6(t_stack *stack);
void				sort_five_value(t_stack **a_stack, t_stack **b_stack);
void				sort_four_value(t_stack **a_stack, t_stack **b_stack);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:31:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/02 13:35:43 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/*
** FOR TESTING VVV
*/

# include <stdio.h>

/*
** FOR TESTING ^^^
*/

/*
** MACROS GALORE
*/

# define FEELSGOODMAN 1
# define FEELSBADMAN 0

# define INPUT 1
# define MAXSIZE 2
# define MINSIZE 3
# define DUPE 4
# define OPS 5
# define ARGS 6

# define S_C_N stack_create_node
# define OP_FREE {free(line); free_stack(a); free_stack(b); error_out(OPS);}
# define STACK_FREE {free_stack(&a); free_stack(&b);}
# define ERR_INT_INPUT {err_input(av[i]); err_int(av[i]);}
# define ADD_NODES {node = S_C_N(ft_atoi(av[i])); stack_add_tail(&head, node);}
# define FREE_ERR_DUPE {free(args); array_free(arr); error_out(DUPE);}
# define SHIFT_ARGS {av += 1; ac--;}
# define SHIFT_ARGS_2 {*av += 1; *ac -= 1;}
# define COUNT {ft_putstr_col_fd(CYAN, "Move Count: ", 1); ft_putnbr_nl(move);}

# define DEBUG {print_stack(a, 'A'); print_stack(b, 'B');}
# define DEBUG_2 {print_stack(&a, 'A'); print_stack(&b, 'B');}

# define CLEAR ft_putstr("\033[H\033[J");
# define DIVIDER ft_putchar_col_fd(WHITE, '|', 1); ft_putchar(' ');
//# define VISUALIZE {ft_putstr("\033[H\033[J"); visualize(a, b);}

typedef struct		s_arguments
{
	char v : 1;
	char c : 1;
	char p : 1;
}					t_arguments;


typedef struct		s_struct
{
	int				value;
	int				norm;
	struct s_struct	*next;
	struct s_struct	*prev;
}					t_stack;

/*
** Stack Ops
*/

t_stack				*stack_create_node(int value);
t_stack				*stack_init(char **av);
void				stack_add_tail(t_stack **head, t_stack *node);
void				stack_add_head(t_stack **head, t_stack *node);
void				free_stack(t_stack **head);
void				normalize(t_stack **stack_a);

/*
** Operation Funcs
*/

void				sa(t_stack **stack_a, int p_bool);
void				sb(t_stack **stack_b, int p_bool);
void				ss(t_stack **stack_a, t_stack **stack_b, int p_bool);
void				pa(t_stack **stack_a, t_stack **stack_b, int p_bool);
void				pb(t_stack **stack_a, t_stack **stack_b, int p_bool);
void				ra(t_stack **stack_a, int p_bool);
void				rb(t_stack **stack_b, int p_bool);
void				rr(t_stack **stack_a, t_stack **stack_b, int p_bool);
void				rra(t_stack **stack_a, int p_bool);
void				rrb(t_stack **stack_b, int p_bool);
void				rrr(t_stack **stack_a, t_stack **stack_b, int p_bool);
void				do_op(t_stack **stack_a, t_stack **stack_b, char *str);

/*
** Other Funcs
*/

void				read_input(t_stack **stack_a, t_stack **stack_b, t_arguments args);
void				array_free(char **arr);
void				handle_arguments(int *ac, char ***av, t_arguments *args);

/*
** Validation & Error Funcs
*/

void				validate(int ac, char **av);
int					is_string(char *str);
int					check_sorted(t_stack *stack_a);
int					stack_size(t_stack *head);
int					arr_size(char **array);
t_stack				*split_input(char *str);
void				error_out(int code);
void				err_duplicate(int ac, char **av);
void				err_int(const char *str);
void				err_input(const char *str);
int					err_ops(char *op);

/*
** Debugging / Vizualizer
*/

void				visualize(t_stack *stack_a, t_stack *stack_b);
void				print_stack(t_stack **head, char stack_id);
void				print_norm(t_stack *node);

/*
** Algo
*/

void				sort_master(t_stack **stack_a, t_stack **stack_b);
void				sort_2(t_stack **stack_a);
void				sort_3(t_stack **stack_a);
void				sort_5(t_stack **stack_a, t_stack **stack_b);
void				sort_20(t_stack **stack_a, t_stack **stack_b);
void				sort_100(t_stack **stack_a, t_stack **stack_b);
void				sort_500(t_stack **stack_a, t_stack **stack_b);
void				sort_me(t_stack **stack_a, t_stack **stack_b);

/*
** Algo Helpers
*/

int					find_largest(t_stack **head);
int					find_largest_pos(t_stack **head, int largest);
int					find_smallest(t_stack **head);
int					find_smallest_pos(t_stack **head, int smallest);
int					find_nsmallest_pos(t_stack **head, int smallest);
int					find_nlargest_pos(t_stack **head, int largest);
int					find_nsmallest_range_pos(t_stack **head, int range);
void				ra_rra_x_times(t_stack **head, int pos);
void				rb_rrb_x_times(t_stack **head, int pos);
void				pushback_b(t_stack **stack_a, t_stack **stack_b, int i,\
																int range_max);

#endif

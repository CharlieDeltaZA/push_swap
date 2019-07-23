/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:31:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/23 11:25:34 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/*
** FOR TESTING VVV
*/

# include <stdio.h>
# define DEBUG print_stack(a, 'A'); print_stack(b, 'B');
# define DEBUG_2 print_stack(&a, 'A'); print_stack(&b, 'B');

/*
** FOR TESTING ^^^
*/

# define FEELSGOODMAN 1
# define FEELSBADMAN 0

# define INPUT 1
# define MAXSIZE 2
# define MINSIZE 3
# define DUPE 4
# define OPS 5

# define S_C_N stack_create_node
# define OP_FREE {free(line); free_stack(a); free_stack(b); error_out(OPS);}
# define STACK_FREE {free_stack(&a); free_stack(&b);}
# define ERR_INT_INPUT {err_input(av[i]); err_int(av[i]);}
# define ADD_NODES {node = S_C_N(ft_atoi(av[i])); stack_add_tail(&head, node);}
# define FREE_ERR_DUPE {free(args); error_out(DUPE);}

/*
** TODO -- Just needs to be checked that everything is perfect
*/
typedef struct		s_struct
{
	int				value;
	struct s_struct	*next;
	struct s_struct	*prev;
}					t_stack;

/*
** Stack Ops
*/

t_stack				*stack_create_node(int value);
void				stack_add_head(t_stack **head, t_stack *node);
t_stack				*stack_init(int size, int ac, char **av);
void				stack_add_tail(t_stack **head, t_stack *node);
void				free_stack(t_stack **head);

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

void				error_out(int code);
void				err_duplicate(int ac, char **av);
void				err_int(const char *str);
void				err_input(const char *str);
int					err_ops(char *op);
void				err_duplicate_arr(int size, char **av);
void				read_input(t_stack **stack_a, t_stack **stack_b);
void				array_free(char **arr);

/*
** Validation Funcs
*/

void				validate(int size, int ac, char **av);
int					check_sorted(t_stack *stack_a);
size_t				stack_size(t_stack *head);
int					arr_size(char **array);
t_stack				*split_input(char *str, int ac);

/*
** Debugging
*/

void				print_stack(t_stack **head, char stack_id);

/*
** Algo
*/

void				sort_master(t_stack **stack_a, t_stack **stack_b);
void				sort_2(t_stack **stack_a);
void				sort_3(t_stack **stack_a);
void				sort_5(t_stack **stack_a, t_stack **stack_b);
void				sort_me(t_stack **stack_a, t_stack **stack_b);

/*
** Algo Helpers
*/

int					find_largest(t_stack **head);
int					find_largest_pos(t_stack **head, int largest);
int					find_smallest(t_stack **head);
int					find_smallest_pos(t_stack **head, int smallest);


#endif

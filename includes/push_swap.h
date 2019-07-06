/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:31:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/06 19:52:46 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# define FEELSGOODMAN 1
# define FEELSBADMAN 0

# define INPUT 1
# define MAXSIZE 2
# define MINSIZE 3
# define DUPE 4
# define OPS 5

//TODO
typedef struct		s_struct
{
	int				value;
	struct s_struct	*next;
	struct s_struct	*prev;
}					t_stack;

/*
** Stack Ops
*/

t_stack				*stack_create_node(int value); //TODO
void				stack_add_head(t_stack **head, t_stack *node);
t_stack				*stack_init(int ac, char **av); //????
void				stack_add_tail(t_stack **head, t_stack *node);
size_t				stack_size(t_stack *head);

/*
** Operation Funcs
*/

void				sa(t_stack *stack_a);
void				sb(t_stack *stack_b);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa(t_stack *stack_a, t_stack *stack_b);
void				pb(t_stack *stack_a, t_stack *stack_b);
void				ra();
void				rb();
void				rr();
void				rra();
void				rrb();
void				rrr();

/*
** Other Funcs
*/

void				error_out(int code);
void				err_duplicate(int ac, char **av);
void				err_int(const char *str);
void				err_input(const char *str);
void				err_ops(char *op);
void				validate(int ac, char **av);
int					check_sorted(t_stack **stack_a);

#endif

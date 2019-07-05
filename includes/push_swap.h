/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:31:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/05 13:25:53 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# define FEELSGOODMAN 1
# define FEELSBADMAN 0

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

void				sa(t_stack *stacka);
void				sb(t_stack *stackb);
void				ss(t_stack *stacka, t_stack *stackb);
void				pa(t_stack *stacka, t_stack *stackb);
void				pb(t_stack *stacka, t_stack *stackb);
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
void				err_duplicate();
void				err_int(const char *str);
void				err_input();
void				err_ops();

#endif

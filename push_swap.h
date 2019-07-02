/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 12:31:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/02 13:08:54 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

//TODO
typedef struct		s_struct
{
	int				value;
	struct s_struct	*next;
	struct s_struct	*prev;
}					t_stack;

t_stack				*stack_create_node(); //TODO
void				stack_add(t_stack **head, t_stack *new);
t_stack				stack_init(t_stack *a, int ac, char *av); //????

#endif

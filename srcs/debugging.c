/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugging.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:49:44 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/08 12:11:50 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Prints out the stack given to it, and appropriately identifies it
*/

void		print_stack(t_stack **head, char stack_id)
{
	t_stack *node;

	node = *head;
	if (node)
	{
		ft_putstr("--- Stack ");
		ft_putchar(stack_id);
		ft_putendl(" ---");
		while (node)
		{
			ft_putnbr(node->value);
			print_norm(node);
			node = node->next;
		}
		ft_putendl("---------------");
	}
}

/*
** Prints out the normalized values from each node in the stack
*/

static void	print_norm(t_stack *node)
{
	if (node)
	{
		ft_putstr(" - Norm: ");
		ft_putnbr_nl(node->norm);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugging.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:49:44 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/26 13:00:31 by cdiogo           ###   ########.fr       */
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
		printf("--- Stack %c ---\n", stack_id);
		while (node)
		{
			ft_putnbr(node->value);
			print_norm(node);
			ft_putendl("");
			node = node->next;
		}
		printf("---------------\n");
	}
}

/*
** Prints out the normalized values from each node in the stack
*/

void		print_norm(t_stack *node)
{
	if (node)
	{
		ft_putstr(" - Norm: ");
		ft_putnbr(node->norm);
	}
}

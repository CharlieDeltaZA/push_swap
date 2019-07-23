/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:36:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/23 08:50:54 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_largest(t_stack **head)
{
	//TODO
	t_stack	*node;
	int		largest;

	node = *head;
	largest = 0;
	while (node)
	{
		if (node->value > largest)
			largest = node->value;
		node = node->next;
	}
	return (largest);
}

int		find_largest_pos(t_stack **head, int largest)
{
	//TODO
	t_stack	*node;
	int 	pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->value == largest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

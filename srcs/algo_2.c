/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:30:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/22 15:01:34 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	sort_me(t_stack **stack_a, t_stack **stack_b)
// {
// 	//TODO
// }

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

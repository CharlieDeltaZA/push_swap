/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:36:02 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/24 21:27:38 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	normalize(t_stack **stack_a)
{
	t_stack    *temp1; // this is going to set the actual normalize values;
	t_stack    *temp2; // used to increment through the nodes;
	int			norm;

	norm = stack_size(*stack_a);
	temp1 = *stack_a;
	temp1->norm = norm;
	while (temp1 != NULL)
	{
		temp2 = (*stack_a)->next;
		while (temp2)
		{
			if (temp1->value > temp2->value)
			{
				temp1->norm = norm;
				norm--;
			}
			temp2 = temp2->next;
		}
		norm = norm * -1;
		temp1 = temp1->next;
	}
}
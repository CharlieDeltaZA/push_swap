/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:36:02 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 13:22:27 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Increment through the stack and normalize the values for easier sorting
*/

void	normalize(t_stack **stacka)
{
	t_stack		*slow;
	t_stack		*fast;
	int			norm;

	slow = *stacka;
	while (slow)
	{
		norm = stack_size(*stacka);
		slow->norm = norm;
		fast = *stacka;
		while (fast)
		{
			if (slow->value < fast->value)
				slow->norm--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}

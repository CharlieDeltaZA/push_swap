/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:50:05 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 13:38:05 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Determines how many times to ra or rra to get a number to top of stack.
** Used in sort_5
*/

void	ra_rra_x_times(t_stack **head, int pos)
{
	int		stacksize;

	stacksize = stack_size(*head);
	if (pos > stacksize / 2)
	{
		pos = stacksize - pos;
		while (pos != 0)
		{
			rra(head, 1);
			pos--;
		}
	}
	else if (pos <= stacksize / 2)
	{
		while (pos != 0)
		{
			ra(head, 1);
			pos--;
		}
	}
}

/*
** Determines how many times to rb or rrb to get a number to top of stack.
*/

void	rb_rrb_x_times(t_stack **head, int pos)
{
	int		stacksize;

	stacksize = stack_size(*head);
	if (pos > stacksize / 2)
	{
		pos = stacksize - pos;
		while (pos != 0)
		{
			rrb(head, 1);
			pos--;
		}
	}
	else if (pos <= stacksize / 2)
	{
		while (pos != 0)
		{
			rb(head, 1);
			pos--;
		}
	}
}

void	pushback_b(t_stack **stack_a, t_stack **stack_b, int i, int range_max)
{
	int		pos;

	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 5)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 5;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:50:05 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 13:19:01 by cdiogo           ###   ########.fr       */
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

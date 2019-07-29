/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:30:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 15:35:25 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	sort_me(t_stack **stack_a, t_stack **stack_b)
// {
// 	//TODO
// }

/*
** Sorts between 21 and 100 numbers
*/

void	sort_100(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		range_max;
	int		i;

	size = stack_size(*stack_a);
	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 16;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= range_max)
			{
				pb(stack_a, stack_b, 1);
				i++;
			}
			else
				ra(stack_a, 1);
		}
	}
	i--;
	pushback_b(stack_a, stack_b, i, range_max);
}

/*
** Sorts between 101 and 500 numbers
*/

void	sort_500(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		range_max;
	int		i;

	size = stack_size(*stack_a);
	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += 45;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= range_max)
			{
				pb(stack_a, stack_b, 1);
				i++;
			}
			else
				ra(stack_a, 1);
		}
	}
	i--;
	pushback_b(stack_a, stack_b, i, range_max);
}

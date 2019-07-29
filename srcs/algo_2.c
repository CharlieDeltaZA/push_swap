/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:30:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 13:24:29 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	sort_me(t_stack **stack_a, t_stack **stack_b)
// {
// 	//TODO
// }

void	sort_100(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		range_max;
	int		i;
	int		pos;

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
	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 16)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 16;
	}
}

void	sort_500(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		range_max;
	int		i;
	int		pos;

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
	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 45)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 45;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:07:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/19 16:51:08 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_2(t_stack **stack_a)
{
	t_stack	*node;

	node = *stack_a;
	if (node->value > node->next->value)
		sa(stack_a, 1);
}

void	sort_3(t_stack **stack_a)
{
	t_stack	*node;
	int		l1;
	int		l2;
	int		l3;

	node = *stack_a;
	l1 = node->value;
	l2 = node->next->value;
	l3 = node->next->next->value;
	if (l1 > l2 && l1 > l3 && l3 < l2)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (l1 < l2 && l2 > l3 && l3 > l1)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (l1 > l2 && l1 < l3 && l3 > l2)
		sa(stack_a, 1);
	else if (l1 > l3 && l3 > l2 && l1 > l2)
		ra(stack_a, 1);
	else if (l3 < l1 && l3 < l2 && l1 < l2)
		rra(stack_a, 1);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	//TODO
	size_t	i;

	i = 0;
	while (i < (stack_size(*stack_a) - 3))
	{
		pb(stack_a, stack_b, 1);
		i++;
	}
	print_stack(stack_a, 'A');
	print_stack(stack_b, 'B');
	sort_3(stack_a);
	pa(stack_a, stack_b, 1);
	ra(stack_a, 1);
	pa(stack_a, stack_b, 1);
}

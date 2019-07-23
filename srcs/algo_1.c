/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:07:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/23 13:09:29 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Master handler for sort funcs
*/

void	sort_master(t_stack **stack_a, t_stack **stack_b)
{
	//TODO
	size_t	size_a;

	size_a = stack_size(*stack_a);
	if (size_a == 2)
		sort_2(stack_a);
	else if (size_a == 3)
		sort_3(stack_a);
	else if (size_a > 3 && size_a < 6)
		sort_5(stack_a, stack_b);
	// else
	// 	sort_me(stack_a, stack_b);
}

/*
** Sorts 2 numbers, if required.
*/

void	sort_2(t_stack **stack_a)
{
	t_stack	*node;

	node = *stack_a;
	if (node->value > node->next->value)
		sa(stack_a, 1);
}

/*
** Sorts 3 numbers.
*/

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

/*
** Sorts 5 numbers.
*/

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	//TODO -Works for 1/120 permutations :) Yay me.
	// size_t	i;

	// i = 0;
	// while (i < (stack_size(*stack_a) - 2))
	// {
	// 	pb(stack_a, stack_b, 1);
	// 	i++;
	// }
	// print_stack(stack_a, 'A');
	// print_stack(stack_b, 'B');
	// sort_3(stack_a);
	// pa(stack_a, stack_b, 1);
	// ra(stack_a, 1);
	// pa(stack_a, stack_b, 1);

	// int largest = find_largest(stack_a);
	// int smallest = find_smallest(stack_a);
	t_stack	*a = *stack_a;
	t_stack	*b = *stack_b;
	// printf("Largest Num: %d\n", largest);
	// printf("Pos Largest: %d\n", find_largest_pos(stack_a, largest));
	// printf("Smallest Num: %d\n", smallest);
	// printf("Pos Smallest: %d\n", find_smallest_pos(stack_a, smallest));
	pb(&a, &b, 1);
	pb(&a, &b, 1);
	DEBUG_2;
	sort_3(&a);
	DEBUG_2;
	
}

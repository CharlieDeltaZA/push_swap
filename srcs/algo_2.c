/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:30:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/28 15:02:29 by cdiogo           ###   ########.fr       */
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
	int		group;
	int 	range_max;
	int		i;
	int		pos;
	//t_stack	*a;
	//t_stack	*b;

	//a = *stack_a;
	size = stack_size(*stack_a);
	group = 0; //group not actively in use
	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		// if (!stack_a)
		// 	break ;
		group += 1;
		range_max += 20;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= range_max)
			{
				pb(stack_a, stack_b, 1);
				// print_stack(stack_a, 'A');
				// print_stack(stack_b, 'B');
				i++;
			}
			else
			{
				ra(stack_a, 1);
				// print_stack(stack_a, 'A');
				// print_stack(stack_b, 'B');
			}
		}
	}
	// print_stack(stack_a, 'A');
	// print_stack(stack_b, 'B');
	// printf("StackA Empty!\n");
	// printf("Group: %d\n", group);
	// printf("RangeMax: %d\n", range_max);
	// printf("I: %d\n", i);
	i--;
	while (*stack_b) // will this work? :thinking:
	{
		
		while (i > 0 && i >= range_max - 20)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 20;
	}
}

void	sort_500(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		group;
	int 	range_max;
	int		i;
	int		pos;
	//t_stack	*a;
	//t_stack	*b;

	//a = *stack_a;
	size = stack_size(*stack_a);
	group = 0; //group not actively in use
	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		// if (!stack_a)
		// 	break ;
		group += 1;
		range_max += 50;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= range_max)
			{
				pb(stack_a, stack_b, 1);
				// print_stack(stack_a, 'A');
				// print_stack(stack_b, 'B');
				i++;
			}
			else
			{
				ra(stack_a, 1);
				// print_stack(stack_a, 'A');
				// print_stack(stack_b, 'B');
			}
		}
	}
	// print_stack(stack_a, 'A');
	// print_stack(stack_b, 'B');
	// printf("StackA Empty!\n");
	// printf("Group: %d\n", group);
	// printf("RangeMax: %d\n", range_max);
	// printf("I: %d\n", i);
	i--;
	while (*stack_b) // will this work? :thinking:
	{
		
		while (i > 0 && i >= range_max - 50)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_rrb_x_times(stack_b, pos);
			pa(stack_a, stack_b, 1);
			i--;
		}
		range_max -= 50;
	}
}

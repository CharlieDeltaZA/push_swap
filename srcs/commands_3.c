/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:58:45 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/16 13:43:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** rra: reverse rotate a - shift down all elements of stack a by 1. The last
** element becomes the first one.
*/

void	rra(t_stack **stack_a)
{
	//TODO -- Seems to work, might need some protection
	t_stack	*last;
	t_stack	*second_last;

	if ((!*stack_a) || (stack_size(*stack_a) < 2))
		return ;
	last = *stack_a;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

/*
** rrb: reverse rotate b - shift down all elements of stack b by 1. The last
** element becomes the first one.
*/

void	rrb(t_stack **stack_b)
{
	//TODO -- Seems to work, might need some protection
	t_stack	*last;
	t_stack	*second_last;

	if ((!*stack_b) || (stack_size(*stack_b) < 2))
		return ;
	last = *stack_b;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stack_b;
	*stack_b = last;
}

/*
** rrr: rra and rrb at the same time.
*/

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	//TODO -- Done?
	rra(stack_a);
	rrb(stack_b);
}

void	read_input(t_stack **a, t_stack **b)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		if (err_ops(line))
		{
			do_op(a, b, line);
			DEBUG;
			ft_putendl_col_fd(GREEN, line, 1);//debugging
			free(line);
		}
		else
			OP_FREE;
	}
}

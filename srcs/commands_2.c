/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:56:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/18 13:55:56 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** ra: rotate a - shift up all elements of stack a by 1. The first element
** becomes the last one.
*/

void	ra(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if ((!*stack_a) || (stack_size(*stack_a) < 2))
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
}

/*
** rb: rotate b - shift up all elements of stack b by 1. The first element
** becomes the last one.
*/

void	rb(t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	if ((!*stack_b) || (stack_size(*stack_b) < 2))
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
}

/*
** rr: ra and rb at the same time.
*/

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

void	do_op(t_stack **stack_a, t_stack **stack_b, char *str)
{
	if (ft_strequ(str, "pa"))
		pa(stack_a, stack_b);
	else if (ft_strequ(str, "pb"))
		pb(stack_a, stack_b);
	else if (ft_strequ(str, "sa"))
		sa(stack_a);
	else if (ft_strequ(str, "sb"))
		sb(stack_b);
	else if (ft_strequ(str, "ra"))
		ra(stack_a);
	else if (ft_strequ(str, "rb"))
		rb(stack_b);
	else if (ft_strequ(str, "rra"))
		rra(stack_a);
	else if (ft_strequ(str, "rrb"))
		rrb(stack_b);
	else if (ft_strequ(str, "ss"))
		ss(stack_a, stack_b);
	else if (ft_strequ(str, "rr"))
		rr(stack_a, stack_b);
	else if (ft_strequ(str, "rrr"))
		rrr(stack_a, stack_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:56:55 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/09 15:02:34 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** ra: rotate a - shift up all elements of stack a by 1. The first element
** becomes the last one.
*/

void	ra(t_stack **stack_a)
{
	//TODO -- Seems to work, might need some protection
	// Put the first node in a temp node, make the 2nd node the new head, iterate
	// to the last node, point that node.next to the temp node and make temp node.next to NULL
	t_stack	*first;
	t_stack	*last;

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
	//TODO -- Seems to work, might need some protection
	// Put the first node in a temp node, make the 2nd node the new head, iterate
	// to the last node, point that node.next to the temp node and make temp node.next to NULL
	t_stack	*first;
	t_stack	*last;

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
	//TODO -- Done?
	// Call both functions
	ra(stack_a);
	rb(stack_b);
}

void	do_op(t_stack **stack_a, t_stack **stack_b, char *str)
{
	//TODO -- Done?
	ft_putendl_col_fd(CYAN, "HEP!", 1);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:53:51 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/18 13:58:21 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** sa: swap a - swap the first 2 elements at the top of stack a. Do nothing if
** there is only one or no elements).
*/

void	sa(t_stack **stack_a)
{
	t_stack		*temp;
	t_stack		*next_temp;

	if (!*stack_a)
		return ;
	if ((*stack_a)->next != NULL)
	{
		temp = *stack_a;
		next_temp = (*stack_a)->next;
		temp->prev = next_temp;
		temp->next = next_temp->next;
		next_temp->prev = NULL;
		next_temp->next = temp;
		*stack_a = next_temp;
	}
}

/*
** sb: swap b - swap the first 2 elements at the top of stack b. Do nothing if
** there is only one or no elements).
*/

void	sb(t_stack **stack_b)
{
	t_stack		*temp;
	t_stack		*next_temp;

	if (!*stack_b)
		return ;
	if ((*stack_b)->next != NULL)
	{
		temp = *stack_b;
		next_temp = (*stack_b)->next;
		temp->prev = next_temp;
		temp->next = next_temp->next;
		next_temp->prev = NULL;
		next_temp->next = temp;
		*stack_b = next_temp;
	}
}

/*
** ss: sa and sb at the same time.
*/

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

/*
** pa: push a - take the first element at the top of b and put it at the top of
** a. Do nothing if b is empty.
*/

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	if (stack_b != NULL)
	{
		tmp = *stack_b;
		if ((*stack_b)->next)
			*stack_b = (*stack_b)->next;
		else
			*stack_b = NULL;
		if (*stack_b)
			(*stack_b)->prev = NULL;
		if (stack_a == NULL)
			stack_add_head(stack_a, tmp);
		else if (stack_a != NULL)
			stack_add_head(stack_a, tmp);
	}
}

/*
** pb: push b - take the first element at the top of a and put it at the top of
** b. Do nothing if a is empty.
*/

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_a)
		return ;
	if (stack_a != NULL)
	{
		tmp = *stack_a;
		if ((*stack_a)->next)
			*stack_a = (*stack_a)->next;
		else
			*stack_a = NULL;
		if (*stack_a)
			(*stack_a)->prev = NULL;
		if (stack_b == NULL)
			stack_add_head(stack_b, tmp);
		else if (stack_b != NULL)
			stack_add_head(stack_b, tmp);
	}
}

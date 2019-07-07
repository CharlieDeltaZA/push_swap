/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:53:51 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/07 15:51:56 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// IDEALLY PASSING THE HEAD TO EACH FUNCTION !

/*
** sa: swap a - swap the first 2 elements at the top of stack a. Do nothing if
** there is only one or no elements).
*/

void	sa(t_stack **stack_a)
{
	//TODO -- Seems to work
	int		val1;
	int		val2;

	if (stack_a->next != NULL)
	{
		val1 = stack_a->value;
		val2 = stack_a->next->value;
		stack_a->next->value = val1;
		stack_a->value = val2;
	}
}

/*
** sb: swap b - swap the first 2 elements at the top of stack b. Do nothing if
** there is only one or no elements).
*/

void	sb(t_stack **stack_b)
{
	//TODO -- Should work because sa works
    int     val1;
    int     val2;

    if (stack_b->next != NULL)
    {
        val1 = stack_b->value;
        val2 = stack_b->next->value;
        stack_b->next->value = val1;
        stack_b->value = val2;
    }
}

/*
** ss: sa and sb at the same time.
*/

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	//TODO -- Probably works, just calls the other 2 funcs
	// Have a safety check in here even tho each function already has one?
//	if (stack_a->next != NULL && stack_b->next != NULL)
//	{
	sa(stack_a);
	sb(stack_b);
//	}
}

/*
** pa: push a - take the first element at the top of b and put it at the top of
** a. Do nothing if b is empty.
*/

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	//TODO
	t_stack	*tmp;
	t_stack	*b;

	if (stack_b != NULL)
	{
		tmp = stack_b; //hold first node
		b = stack_b;
		stack_b = b->next; //new head
		b->prev = NULL;
		if (stack_a == NULL)
			stack_a = tmp;	//if head is null we make the new head of B the node we push
		else if (stack_a != NULL) //else we push the node to the list and make it the head
			stack_add_head(&stack_a, tmp);
	}
}

/*
** pb: push b - take the first element at the top of a and put it at the top of
** b. Do nothing if a is empty.
*/

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	//TODO
	t_stack	*tmp;
	t_stack	*a;

	if (stack_a != NULL)
	{
		tmp = stack_a; //hold first node
		a = stack_a;
		stack_a = a->next; //new head
		a->prev = NULL;
		if (stack_b == NULL)
			stack_b = tmp;	//if head is null we make the new head of B the node we push
		else if (stack_b != NULL) //else we push the node to the list and make it the head
			stack_add_head(&stack_b, tmp);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:53:51 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/04 21:38:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// IDEALLY PASSING THE HEAD TO EACH FUNCTION !

/*
** sa: swap a - swap the first 2 elements at the top of stack a. Do nothing if
** there is only one or no elements).
*/

void	sa(t_stack *stacka)
{
	//TODO -- Seems to work
	int		val1;
	int		val2;

	if (stacka->next != NULL)
	{
		val1 = stacka->value;
		val2 = stacka->next->value;
		stacka->next->value = val1;
		stacka->value = val2;
	}
}

/*
** sb: swap b - swap the first 2 elements at the top of stack b. Do nothing if
** there is only one or no elements).
*/

void	sb(t_stack *stackb)
{
	//TODO -- Should work because sa works
    int     val1;
    int     val2;

    if (stackb->next != NULL)
    {
        val1 = stackb->value;
        val2 = stackb->next->value;
        stackb->next->value = val1;
        stackb->value = val2;
    }
}

/*
** ss: sa and sb at the same time.
*/

void	ss(t_stack *stacka, t_stack *stackb)
{
	//TODO -- Probably works, just calls the other 2 funcs
	// Have a safety check in here even tho each function already has one?
	if (stacka->next != NULL && stackb->next != NULL)
	{
		sa(stacka);
		sb(stackb);
	}
}

/*
** pa: push a - take the first element at the top of b and put it at the top of
** a. Do nothing if b is empty.
*/

void	pa(t_stack *stacka, t_stack *stackb)
{
	//TODO
	if (stackb != NULL)
	{
		
	}
}

/*
** pb: push b - take the first element at the top of a and put it at the top of
** b. Do nothing if a is empty.
*/

void	pb(t_stack *stacka, t_stack *stackb)
{
	//TODO
	t_stack	*tmp;
	t_stack	*a;

	if (stacka != NULL)
	{
		tmp = stacka; //hold first node
		a = stacka;
		stacka = a->next; //new head
		a->prev = NULL;
		if (stackb == NULL)
			stackb = tmp;	//if head is null we make the new head of B the node we push
		else if (stackb != NULL) //else we push the node to the list and make it the head
			stack_add_head(&stackb, tmp);
	}
}

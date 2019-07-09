/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/09 11:20:08 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Perform error checking on the input values. Validate() calls 3 functions to
** ensure that there are no duplicates, no invalid inputs and no breaches of
** limits of an INT.
*/

void	validate(int ac, char **av)
{
	//TODO -- Done?
	int	i;

	i = 1;
	while (i < ac)
	{
		err_input(av[i]);
		err_int(av[i]);
		i++;
	}
	err_duplicate(ac, av);
}

/*
** Check whether the function has been sorted and return a value to allow
** printing of an appropriate message.
*/

int		check_sorted(t_stack **stack_a, t_stack **stack_b)
{
	//TODO -- Done
	t_stack	*node;
	
	node = *stack_a;
	if (stack_size(stack_b) > 0)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (FEELSBADMAN); //still values in stack b after last command given
	}
	while (node->next != NULL)
	{
		if (node->value > node->next->value)
		{
			free_stack(stack_a);
			free_stack(stack_b);
			return (FEELSBADMAN); //not sorted
		}
		node = node->next;
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (FEELSGOODMAN); //sorted
}

/*
** Get the size of the list (stack)
*/

size_t	stack_size(t_stack **head)
{
	size_t	i;
	t_stack	*list;

	list = *head;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
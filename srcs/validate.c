/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/07 11:12:40 by cdiogo           ###   ########.fr       */
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
		return (FEELSBADMAN); //still values in stack b after last command given
	while (node->next != NULL)
	{
		if (node->value > node->next->value)
			return (FEELSBADMAN); //not sorted
		node = node->next;
	}
	return (FEELSGOODMAN); //sorted
}